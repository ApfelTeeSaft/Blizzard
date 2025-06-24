#pragma once
#include "SDK.hpp"
#include "Globals.h"
#include "Types.h"
#include <algorithm>

struct FNetworkObjectInfo
{
	SDK::AActor* Actor;
	double NextUpdateTime;
	double LastNetReplicateTime;
	float OptimalNetUpdateDelta;
	float LastNetUpdateTime;
	float NetworkPriority;
	uint32_t bPendingNetUpdate : 1;
	uint32_t bForceRelevantNextUpdate : 1;
	uint32_t bTearOff : 1;
	std::vector<SDK::UNetConnection*> DormantConnections;
	std::vector<SDK::UNetConnection*> RecentlyDormantConnections;
};

struct FConnectionReplicationData
{
	SDK::UNetConnection* Connection;
	std::vector<FNetworkObjectInfo*> RelevantActors;
	float LastReplicationTime;
	int32_t MaxReplicationBytes;
	int32_t UsedReplicationBytes;
};

inline int32_t Rand() { return rand(); };
inline float FRand() { return Rand() / (float)RAND_MAX; };

// Helper functions for distance calculations
inline float DistanceSquared(const SDK::FVector& A, const SDK::FVector& B)
{
	float DX = A.X - B.X;
	float DY = A.Y - B.Y;
	float DZ = A.Z - B.Z;
	return (DX * DX) + (DY * DY) + (DZ * DZ);
}

inline float Distance(const SDK::FVector& A, const SDK::FVector& B)
{
	return sqrtf(DistanceSquared(A, B));
}

namespace Replication
{
	inline static SDK::UChannel* (*CreateChannel)(SDK::UNetConnection*, int, bool, int32_t);
	inline static __int64 (*ReplicateActor)(SDK::UActorChannel*);
	inline static __int64 (*SetChannelActor)(SDK::UActorChannel*, SDK::AActor*);
	inline static void (*CallPreReplication)(SDK::AActor*, SDK::UNetDriver*);
	inline static void (*SendClientAdjustment)(SDK::APlayerController*);
	inline static void (*ActorChannelClose)(SDK::UActorChannel*);

	constexpr float MAX_REPLICATION_DISTANCE = 10000.0f;
	constexpr float CULL_DISTANCE_SQUARED = MAX_REPLICATION_DISTANCE * MAX_REPLICATION_DISTANCE;

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

		return nullptr;
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

		return nullptr;
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
		return nullptr;
	}

	bool IsActorRelevantForConnection_Impl(SDK::AActor* Actor, SDK::UNetConnection* Connection)
	{
		if (!Actor || !Connection)
			return false;

		if (Actor->bAlwaysRelevant)
			return true;

		if (Actor->GetOwner() == Connection->OwningActor)
			return true;

		if (Actor == Connection->PlayerController)
			return true;

		// Distance culling
		SDK::AActor* ViewTarget = Connection->ViewTarget;
		if (ViewTarget)
		{
			float DistanceSquaredValue = DistanceSquared(
				Actor->K2_GetActorLocation(),
				ViewTarget->K2_GetActorLocation()
			);

			if (DistanceSquaredValue > CULL_DISTANCE_SQUARED)
				return false;
		}

		if (Actor->RemoteRole == SDK::ENetRole::ROLE_None)
			return false;

		return true;
	}

	// basic impl
	float CalculateNetworkPriority_Impl(SDK::AActor* Actor, SDK::UNetConnection* Connection)
	{
		if (!Actor || !Connection)
			return 0.0f;

		float Priority = 1.0f;

		// Higher priority for player controllers and pawns
		if (Actor->IsA(SDK::APlayerController::StaticClass()) || Actor->IsA(SDK::APawn::StaticClass()))
		{
			Priority *= 3.0f;
		}

		// Always relevant actors get high priority
		if (Actor->bAlwaysRelevant)
		{
			Priority *= 2.0f;
		}

		// Distance-based priority
		SDK::AActor* ViewTarget = Connection->ViewTarget;
		if (ViewTarget)
		{
			float DistanceValue = Distance(
				Actor->K2_GetActorLocation(),
				ViewTarget->K2_GetActorLocation()
			);

			if (DistanceValue > 0.0f)
			{
				// Closer actors get higher priority
				Priority *= (MAX_REPLICATION_DISTANCE / (DistanceValue + 1.0f));
			}
		}

		// Use NetPriority
		if (Actor->NetPriority > 0.0f)
		{
			Priority *= Actor->NetPriority;
		}

		return Priority;
	}

	void BuildConsiderList(SDK::UNetDriver* NetDriver, std::vector<FNetworkObjectInfo*>& OutConsiderList)
	{
		SDK::TArray<SDK::AActor*> Actors;
		SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::AActor::StaticClass(), &Actors);

		// TODO: continue on all Actors that are kicked (CRTMM fix instead of proper gamesessions ig)
		for (int i = 0; i < Actors.Num(); i++)
		{
			auto Actor = Actors[i];

			if (!Actor)
				continue;

			if (Actor->bActorIsBeingDestroyed)
				continue;

			if (Actor->RemoteRole == SDK::ENetRole::ROLE_None)
				continue;

			if (Actor->NetDormancy == SDK::ENetDormancy::DORM_Initial && Actor->bNetStartup)
				continue;

			if (Actor->bTearOff)
				continue;

			if (Actor->Name.ComparisonIndex == 0)
				continue;

			if (CallPreReplication)
				CallPreReplication(Actor, NetDriver);

			FNetworkObjectInfo* Info = new FNetworkObjectInfo();
			Info->Actor = Actor;
			Info->NextUpdateTime = 0.0;
			Info->LastNetReplicateTime = 0.0;
			Info->OptimalNetUpdateDelta = Actor->NetUpdateFrequency > 0.0f ? (1.0f / Actor->NetUpdateFrequency) : 0.1f;
			Info->NetworkPriority = 1.0f;
			Info->bPendingNetUpdate = false;
			Info->bForceRelevantNextUpdate = false;
			Info->bTearOff = Actor->bTearOff;

			OutConsiderList.push_back(Info);
		}
	}

	void BuildRelevantActorsForConnection(SDK::UNetConnection* Connection,
		std::vector<FNetworkObjectInfo*>& ConsiderList,
		std::vector<FNetworkObjectInfo*>& OutRelevantActors)
	{
		for (auto ActorInfo : ConsiderList)
		{
			if (!ActorInfo || !ActorInfo->Actor)
				continue;

			// Check relevancy
			if (IsActorRelevantForConnection_Impl(ActorInfo->Actor, Connection))
			{
				// Calculate priority for this connection
				ActorInfo->NetworkPriority = CalculateNetworkPriority_Impl(ActorInfo->Actor, Connection);
				OutRelevantActors.push_back(ActorInfo);
			}
		}

		// Sort by priority (highest first)
		std::sort(OutRelevantActors.begin(), OutRelevantActors.end(),
			[](const FNetworkObjectInfo* A, const FNetworkObjectInfo* B) {
				return A->NetworkPriority > B->NetworkPriority;
			});
	}

	void ReplicateActors(SDK::UNetDriver* NetDriver)
	{
		// Increment replication frame counter
		++*(DWORD*)(__int64(NetDriver) + 712);

		auto NumClientsToTick = PrepConnections(NetDriver);

		if (NumClientsToTick == 0)
			return;

		// Build global consider list
		std::vector<FNetworkObjectInfo*> ConsiderList;
		BuildConsiderList(NetDriver, ConsiderList);

		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (!Connection)
				continue;

			if (i >= NumClientsToTick)
				continue;

			// Send client adjustments
			if (Connection->PlayerController)
			{
				SendClientAdjustment(Connection->PlayerController);
			}

			for (int32_t ChildIdx = 0; ChildIdx < Connection->Children.Num(); ChildIdx++)
			{
				if (Connection->Children[ChildIdx]->PlayerController != nullptr)
				{
					SendClientAdjustment(Connection->Children[ChildIdx]->PlayerController);
				}
			}

			// Build relevant actors for this connection
			std::vector<FNetworkObjectInfo*> RelevantActors;
			BuildRelevantActorsForConnection(Connection, ConsiderList, RelevantActors);

			// Replicate relevant actors
			for (auto ActorInfo : RelevantActors)
			{
				if (!ActorInfo || !ActorInfo->Actor)
					continue;

				auto Channel = FindChannel(ActorInfo->Actor, Connection);

				if (!Channel)
					Channel = ReplicateToClient(ActorInfo->Actor, Connection);

				if (Channel)
				{
					if (ReplicateActor(Channel))
					{
						static double CurrentTime = 0.0;
						CurrentTime += 0.016;
						ActorInfo->LastNetReplicateTime = CurrentTime;
						ActorInfo->NextUpdateTime = ActorInfo->LastNetReplicateTime + ActorInfo->OptimalNetUpdateDelta;
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
		SendClientAdjustment = decltype(SendClientAdjustment)(Globals::GetAddress(0x221FEC0));
		ActorChannelClose = decltype(ActorChannelClose)(Globals::GetAddress(0x1F7E9C0));
	}
}