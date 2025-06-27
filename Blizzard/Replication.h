#pragma once
#include "SDK.hpp"
#include "Globals.h"

struct FNetworkObjectInfo
{
	SDK::AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
	std::vector<SDK::UNetConnection*> DormantConnections;
	std::vector<SDK::UNetConnection*> RecentlyDormantConnections;
};

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

namespace Replication
{
	inline static SDK::UChannel* (*CreateChannel)(SDK::UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActor)(SDK::UActorChannel*);
	inline static __int64 (*SetChannelActor)(SDK::UActorChannel*, SDK::AActor*);
	inline static void (*CallPreReplication)(SDK::AActor*, SDK::UNetDriver*);
	inline static void (*SendClientAdjustment)(SDK::APlayerController*);
	inline static void (*ActorChannelClose)(SDK::UActorChannel*);

	SDK::UActorChannel* ReplicateToClient(SDK::AActor* InActor, SDK::UNetConnection* InConnection)
	{
		if (InActor->IsA(SDK::APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
			return nullptr;

		auto Channel = (SDK::UActorChannel*)(CreateChannel(InConnection, 2, true, -1));

		if (Channel) {
			SetChannelActor(Channel, InActor);
			Channel->Connection = InConnection;

			return Channel;
		}

		return NULL;
	}

	int PrepConnections(SDK::UNetDriver* NetDriver)
	{
		int ReadyConnections = 0;

		for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			SDK::UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection) continue;

			SDK::AActor* OwningActor = Connection->OwningActor;

			if (OwningActor)
			{
				ReadyConnections++;
				SDK::AActor* DesiredViewTarget = OwningActor;

				if (Connection->PlayerController)
				{
					if (SDK::AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						DesiredViewTarget = ViewTarget;
					}
				}

				Connection->ViewTarget = DesiredViewTarget;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					SDK::UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = DesiredViewTarget;
					}
				}
			}
			else
			{
				Connection->ViewTarget = nullptr;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					SDK::UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController && ChildConnection->ViewTarget)
					{
						ChildConnection->ViewTarget = nullptr;
					}
				}
			}
		}

		return ReadyConnections;
	}

	SDK::UActorChannel* FindChannel(SDK::AActor* Actor, SDK::UNetConnection* Connection)
	{
		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class == SDK::UActorChannel::StaticClass())
				{
					if (((SDK::UActorChannel*)Channel)->Actor == Actor)
						return ((SDK::UActorChannel*)Channel);
				}
			}
		}

		return NULL;
	}

	SDK::UNetConnection* GetOwningConnection(SDK::AActor* Actor)
	{
		for (auto Owner = Actor; Actor; Actor = Actor->GetOwner())
		{
			if (Actor->IsA(SDK::APlayerController::StaticClass()))
			{
				return ((SDK::APlayerController*)Actor)->NetConnection;
			}
		}
	}

	void BuildConsiderList(SDK::UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
	{
		SDK::TArray<SDK::AActor*> Actors;
		SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::AActor::StaticClass(), &Actors);

		for (int i = 0; i < Actors.Num(); i++)
		{
			auto Actor = Actors[i];

			if (!Actor)
				continue;

			if (!Actor)
			{
				continue;
			}

			if (Actor->bActorIsBeingDestroyed)
			{
				continue;
			}

			if (Actor->RemoteRole == SDK::ENetRole::ROLE_None)
			{
				continue;
			}

			if (Actor->NetDormancy == SDK::ENetDormancy::DORM_Initial && Actor->bNetStartup)
			{
				continue;
			}

			if (Actor->Name.ComparisonIndex != 0)
			{
				if (CallPreReplication)
					CallPreReplication(Actor, NetDriver);

				FNetworkObjectInfo* Info = new FNetworkObjectInfo();
				Info->Actor = Actor;

				OutConsiderList.push_back(Info);
			}
		}

		SDK::FreeInternal((__int64)Actors.GetData());
		Actors.SetData(0);
		Actors.SetNum(0);
		Actors.SetMax(0);
	}

	void ReplicateActors(SDK::UNetDriver* NetDriver)
	{
		++*(DWORD*)(__int64(NetDriver) + 212);

		auto NumClientsToTick = PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return;

		std::vector<FNetworkObjectInfo*> ConsiderList;
		BuildConsiderList(NetDriver, ConsiderList);

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (!Connection)
				continue;

			if (i >= NumClientsToTick)
				continue;

			if (Connection->PlayerController)
			{
				SendClientAdjustment(Connection->PlayerController);
			}

			for (int32_t ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
			{
				if (Connection->Children[ChildIdx]->PlayerController != NULL)
				{
					SendClientAdjustment(Connection->Children[ChildIdx]->PlayerController);
				}
			}

			for (auto ActorInfo : ConsiderList)
			{
				if (!ActorInfo)
					continue;

				if (!ActorInfo->Actor)
					continue;

				auto Channel = FindChannel(ActorInfo->Actor, Connection);

				if (!Channel)
					Channel = ReplicateToClient(ActorInfo->Actor, Connection);

				if (Channel)
				{
					if (ReplicateActor(Channel))
					{
					}
				}
			}
		}

		ConsiderList.empty();
		ConsiderList.clear();
	}

	void InitOffsets()
	{

		CreateChannel = decltype(CreateChannel)(Globals::GetAddress(0x2105540));
		SetChannelActor = decltype(SetChannelActor)(Globals::GetAddress(0x1F9C260));
		ReplicateActor = decltype(ReplicateActor)(Globals::GetAddress(0x1F97D80));
		CallPreReplication = decltype(CallPreReplication)(Globals::GetAddress(0x1D84F70));
		SendClientAdjustment = decltype(SendClientAdjustment)(Globals::GetAddress(0x1D84F70));
		ActorChannelClose = decltype(ActorChannelClose)(Globals::GetAddress(0x1F7E9C0));
	}
}