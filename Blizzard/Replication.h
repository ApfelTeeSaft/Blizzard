#pragma once
#include "SDK.hpp"
#include <windows.h>

enum class EChannelType : uint8_t
{
	CHTYPE_None = 0,
	CHTYPE_Control = 1,
	CHTYPE_Actor = 2,
	CHTYPE_File = 3,
	CHTYPE_Voice = 4,
	CHTYPE_MAX = 8
};

struct FNetworkObjectInfo
{
	SDK::AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	float Priority;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
	uint32_t bTearOff : 1;
	std::vector<SDK::UNetConnection*> DormantConnections;
	std::vector<SDK::UNetConnection*> RecentlyDormantConnections;
};

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

namespace Replication
{
	inline static SDK::UChannel* (*CreateChannel)(SDK::UNetConnection*, EChannelType, bool, int32_t);
	inline static bool (*ReplicateActor)(SDK::UActorChannel*);
	inline static void (*SetChannelActor)(SDK::UActorChannel*, SDK::AActor*);
	inline static void (*CallPreReplication)(SDK::AActor*, SDK::UNetDriver*);
	inline static void (*SendClientAdjustment)(SDK::APlayerController*);
	inline static void (*ActorChannelClose)(SDK::UActorChannel*);

	SDK::UActorChannel* ReplicateToClient(SDK::AActor* InActor, SDK::UNetConnection* InConnection)
	{
		if (!InActor || !InConnection)
			return nullptr;

		if (InActor->IsA(SDK::APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
			return nullptr;

		auto Channel = (SDK::UActorChannel*)(CreateChannel(InConnection, EChannelType::CHTYPE_Actor, true, -1));

		if (Channel) {
			SetChannelActor(Channel, InActor);
			Channel->Connection = InConnection;
			Channel->Actor = InActor;

			return Channel;
		}

		return nullptr;
	}

	int PrepConnections(SDK::UNetDriver* NetDriver)
	{
		int ReadyConnections = 0;

		for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			SDK::UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection || !Connection->PlayerController)
				continue;

			SDK::AActor* OwningActor = Connection->OwningActor;

			if (OwningActor && !OwningActor->bActorIsBeingDestroyed)
			{
				ReadyConnections++;
				SDK::AActor* DesiredViewTarget = OwningActor;

				if (Connection->PlayerController)
				{
					if (SDK::AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
					{
						if (!ViewTarget->bActorIsBeingDestroyed)
						{
							DesiredViewTarget = ViewTarget;
						}
					}
				}

				Connection->ViewTarget = DesiredViewTarget;

				for (int ChildIdx = 0; ChildIdx < Connection->Children.Num(); ++ChildIdx)
				{
					SDK::UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection && ChildConnection->PlayerController)
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
					if (ChildConnection)
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
		if (!Actor || !Connection)
			return nullptr;

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

		return nullptr;
	}

	SDK::UNetConnection* GetOwningConnection(SDK::AActor* Actor)
	{
		if (!Actor)
			return nullptr;

		for (auto Owner = Actor; Owner; Owner = Owner->GetOwner())
		{
			if (Owner->IsA(SDK::APlayerController::StaticClass()))
			{
				return ((SDK::APlayerController*)Owner)->NetConnection;
			}
		}
		return nullptr;
	}

	bool ShouldReplicateActor(SDK::AActor* Actor, SDK::UNetDriver* NetDriver)
	{
		if (!Actor || Actor->bActorIsBeingDestroyed)
			return false;

		if (Actor->RemoteRole == SDK::ENetRole::ROLE_None)
			return false;

		if (Actor->NetDormancy == SDK::ENetDormancy::DORM_Initial && Actor->bNetStartup)
			return false;

		if (Actor->bTearOff)
			return false;

		if (Actor->NetUpdateFrequency <= 0.0f)
			return false;

		return true;
	}

	void BuildConsiderList(SDK::UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
	{
		SDK::TArray<SDK::AActor*> Actors;
		SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::AActor::StaticClass(), &Actors);

		for (int i = 0; i < Actors.Num(); i++)
		{
			auto Actor = Actors[i];

			if (!ShouldReplicateActor(Actor, NetDriver))
				continue;

			if (Actor->Name.ComparisonIndex == 0)
				continue;

			if (CallPreReplication)
				CallPreReplication(Actor, NetDriver);

			FNetworkObjectInfo* Info = new FNetworkObjectInfo();
			Info->Actor = Actor;
			Info->NextUpdateTime = 0.0;
			Info->LastNetReplicateTime = 0.0;
			Info->OptimalNetUpdateDelta = 1.0f / Actor->NetUpdateFrequency;
			Info->LastNetUpdateTime = 0.0f;
			Info->Priority = 1.0f;
			Info->bPendingNetUpdate = false;
			Info->bForceRelevantNextUpdate = false;
			Info->bTearOff = Actor->bTearOff;

			OutConsiderList.push_back(Info);
		}

		if (Actors.Data)
		{
			SDK::FreeInternal((__int64)Actors.Data);
			Actors.Data = nullptr;
			Actors.Count = 0;
			Actors.Max = 0;
		}
	}

	void ReplicateActors(SDK::UNetDriver* NetDriver)
	{
		if (!NetDriver)
			return;

		++*(DWORD*)(__int64(NetDriver) + 212);

		auto NumClientsToTick = PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return;

		std::vector<FNetworkObjectInfo*> ConsiderList;
		BuildConsiderList(NetDriver, ConsiderList);

		std::sort(ConsiderList.begin(), ConsiderList.end(),
			[](const FNetworkObjectInfo* a, const FNetworkObjectInfo* b) {
				return a->Priority > b->Priority;
			});

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (!Connection || !Connection->PlayerController)
				continue;

			if (i >= NumClientsToTick)
				continue;

			if (Connection->PlayerController)
			{
				SendClientAdjustment(Connection->PlayerController);
			}

			for (int32_t ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
			{
				if (Connection->Children[ChildIdx] && Connection->Children[ChildIdx]->PlayerController)
				{
					SendClientAdjustment(Connection->Children[ChildIdx]->PlayerController);
				}
			}

			for (auto ActorInfo : ConsiderList)
			{
				if (!ActorInfo || !ActorInfo->Actor)
					continue;

				if (ActorInfo->Actor->bActorIsBeingDestroyed)
					continue;

				auto Channel = FindChannel(ActorInfo->Actor, Connection);

				if (!Channel)
					Channel = ReplicateToClient(ActorInfo->Actor, Connection);

				if (Channel && Channel->Actor)
				{
					if (ReplicateActor(Channel))
					{
						ActorInfo->LastNetReplicateTime = SDK::UGameplayStatics::GetTimeSeconds(Globals::GetWorld());
					}
				}
			}
		}

		for (auto Info : ConsiderList)
		{
			delete Info;
		}
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