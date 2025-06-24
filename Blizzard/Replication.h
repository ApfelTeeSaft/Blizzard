#pragma once
#include "SDK.hpp"
#include <windows.h>
using namespace SDK;

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
	AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	float Priority;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
	uint32_t bTearOff : 1;
	std::vector<UNetConnection*> DormantConnections;
	std::vector<UNetConnection*> RecentlyDormantConnections;
};

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

namespace Replication
{
	inline static UChannel* (*CreateChannel)(UNetConnection*, EChannelType, bool, int32_t);
	inline static bool (*ReplicateActor)(UActorChannel*);
	inline static void (*SetChannelActor)(UActorChannel*, AActor*);
	inline static void (*CallPreReplication)(AActor*, UNetDriver*);
	inline static void (*SendClientAdjustment)(APlayerController*);
	inline static void (*ActorChannelClose)(UActorChannel*);

	UActorChannel* ReplicateToClient(AActor* InActor, UNetConnection* InConnection)
	{
		if (!InActor || !InConnection)
			return nullptr;

		if (InActor->IsA(APlayerController::StaticClass()) && InActor != InConnection->PlayerController)
			return nullptr;

		auto Channel = (UActorChannel*)(CreateChannel(InConnection, EChannelType::CHTYPE_Actor, true, -1));

		if (Channel) {
			SetChannelActor(Channel, InActor);
			Channel->Connection = InConnection;
			Channel->Actor = InActor;

			return Channel;
		}

		return nullptr;
	}

	int PrepConnections(UNetDriver* NetDriver)
	{
		int ReadyConnections = 0;

		for (int ConnIdx = 0; ConnIdx < NetDriver->ClientConnections.Num(); ConnIdx++)
		{
			UNetConnection* Connection = NetDriver->ClientConnections[ConnIdx];
			if (!Connection || !Connection->PlayerController)
				continue;

			AActor* OwningActor = Connection->OwningActor;

			if (OwningActor && !OwningActor->bActorIsBeingDestroyed)
			{
				ReadyConnections++;
				AActor* DesiredViewTarget = OwningActor;

				if (Connection->PlayerController)
				{
					if (AActor* ViewTarget = Connection->PlayerController->GetViewTarget())
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
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
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
					UNetConnection* ChildConnection = Connection->Children[ChildIdx];
					if (ChildConnection)
					{
						ChildConnection->ViewTarget = nullptr;
					}
				}
			}
		}

		return ReadyConnections;
	}

	UActorChannel* FindChannel(AActor* Actor, UNetConnection* Connection)
	{
		if (!Actor || !Connection)
			return nullptr;

		for (int i = 0; i < Connection->OpenChannels.Num(); i++)
		{
			auto Channel = Connection->OpenChannels[i];

			if (Channel && Channel->Class)
			{
				if (Channel->Class == UActorChannel::StaticClass())
				{
					if (((UActorChannel*)Channel)->Actor == Actor)
						return ((UActorChannel*)Channel);
				}
			}
		}

		return nullptr;
	}

	UNetConnection* GetOwningConnection(AActor* Actor)
	{
		if (!Actor)
			return nullptr;

		for (auto Owner = Actor; Owner; Owner = Owner->GetOwner())
		{
			if (Owner->IsA(APlayerController::StaticClass()))
			{
				return ((APlayerController*)Owner)->NetConnection;
			}
		}
		return nullptr;
	}

	bool ShouldReplicateActor(AActor* Actor, UNetDriver* NetDriver)
	{
		if (!Actor || Actor->bActorIsBeingDestroyed)
			return false;

		if (Actor->RemoteRole == ENetRole::ROLE_None)
			return false;

		if (Actor->NetDormancy == ENetDormancy::DORM_Initial && Actor->bNetStartup)
			return false;

		if (Actor->bTearOff)
			return false;

		if (Actor->NetUpdateFrequency <= 0.0f)
			return false;

		return true;
	}

	void BuildConsiderList(UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
	{
		TArray<AActor*> Actors;
		UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::AActor::StaticClass(), &Actors);

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

		if (Actors.Num() > 0) {
		}
	}

	void ReplicateActors(UNetDriver* NetDriver)
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
						ActorInfo->LastNetReplicateTime = UGameplayStatics::GetTimeSeconds(Globals::GetWorld());
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