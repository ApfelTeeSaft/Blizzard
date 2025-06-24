#pragma once

#include "Inventory.h"
#include "SDK.hpp"
#include "Globals.h"
#include "Actor.h"
#include "Logging.h"
#include "Replication.h"

namespace Beacons
{
	SDK::AOnlineBeaconHost* Beacon;

	bool (*InitHost)(SDK::AOnlineBeaconHost*);
	__int64(*WelcomePlayer)(SDK::UWorld* This, SDK::UNetConnection* NetConnection);
	SDK::APlayerController* (*SpawnPlayActor)(SDK::UWorld* a1, SDK::UPlayer* a2, SDK::ENetRole a3, SDK::FURL a4, void* a5, SDK::FString& Src, uint8_t a7);
	void(*UWorld_NotifyControlMessage)(SDK::UWorld* World, SDK::UNetConnection* NetConnection, uint8_t a3, void* a4);
	void (*TickFlush)(SDK::UNetDriver*, float DeltaSeconds);
	void (*NotifyActorDestroyed)(SDK::UNetDriver*, SDK::AActor*, bool);

	SDK::FVector GetPlayerStart();
	void __fastcall AOnlineBeaconHost_NotifyControlMessageHook(SDK::AOnlineBeaconHost* BeaconHost, SDK::UNetConnection* NetConnection, uint8_t a3, void* a4);
	void NotifyActorDestroyedHook(SDK::UNetDriver* NetDriver, SDK::AActor* Actor, bool IsSeamlessTravel);
	void TickFlushHook(SDK::UNetDriver* NetDriver, float DeltaSeconds);
	__int64 KickPatch(__int64, __int64);
	__int64 __fastcall WelcomePlayerHook(SDK::UWorld*, SDK::UNetConnection* NetConnection);
	SDK::APlayerController* SpawnPlayActorHook(SDK::UWorld*, SDK::UNetConnection* Connection, SDK::ENetRole NetRole, SDK::FURL a4, void* a5, SDK::FString& Src, uint8_t a7);
	void InitHooks();

	inline SDK::FVector GetPlayerStart()
	{
		SDK::TArray<SDK::AActor*> OutActors;
		SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::APlayerStart::StaticClass(), &OutActors);
		return OutActors[rand() % OutActors.Num()]->K2_GetActorLocation();
	}

	inline void __fastcall AOnlineBeaconHost_NotifyControlMessageHook(SDK::AOnlineBeaconHost* BeaconHost, SDK::UNetConnection* NetConnection, uint8_t a3, void* a4)
	{
		if (std::to_string(a3) == "4") {
			NetConnection->CurrentNetSpeed = 30000;
			return;
		}
		return UWorld_NotifyControlMessage(Globals::GetWorld(), NetConnection, a3, a4);
	}

	inline void NotifyActorDestroyedHook(SDK::UNetDriver* NetDriver, SDK::AActor* Actor, bool IsSeamlessTravel)
	{
		for (int i = 0; i < NetDriver->ClientConnections.Num(); i++)
		{
			auto Connection = NetDriver->ClientConnections[i];

			if (Connection)
			{
				auto ActorChannel = Replication::FindChannel(Actor, Connection);
				if (!ActorChannel)
					return;

				if (ActorChannel)
				{
					Replication::ActorChannelClose(ActorChannel);
				}
			}
		}

		return;
	}

	inline void TickFlushHook(SDK::UNetDriver* NetDriver, float DeltaSeconds)
	{
		Replication::ReplicateActors(NetDriver);

		return TickFlush(NetDriver, DeltaSeconds);
	}

	inline __int64 KickPatch(__int64, __int64)
	{
		return 0;
	}

	inline __int64 __fastcall WelcomePlayerHook(SDK::UWorld*, SDK::UNetConnection* NetConnection)
	{
		return WelcomePlayer(Globals::GetWorld(), NetConnection);
	}

	inline SDK::APlayerController* SpawnPlayActorHook(SDK::UWorld*, SDK::UNetConnection* Connection, SDK::ENetRole NetRole, SDK::FURL a4, void* a5, SDK::FString& Src, uint8_t a7)
	{
		auto PlayerController = (SDK::AFortPlayerControllerAthena*)SpawnPlayActor(Globals::GetWorld(), Connection, NetRole, a4, a5, Src, a7);
		Connection->PlayerController = PlayerController;
		PlayerController->NetConnection = Connection;
		Connection->OwningActor = PlayerController;

		auto Pawn = (SDK::APlayerPawn_Athena_C*)(ActorNamespace::SpawnActor(SDK::APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(), {}));
		Pawn->SetOwner(PlayerController);
		PlayerController->Possess(Pawn);

		PlayerController->ClientForceProfileQuery();
		Pawn->OnRep_CustomizationLoadout();

		Pawn->ServerChoosePart(SDK::EFortCustomPartType::Head, SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1"));
		Pawn->ServerChoosePart(SDK::EFortCustomPartType::Body, SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01"));
		((SDK::AFortPlayerStateAthena*)Pawn->PlayerState)->OnRep_CharacterParts();

		Pawn->CharacterMovement->bReplicates = true;
		Pawn->SetReplicateMovement(true);
		Pawn->OnRep_ReplicatedBasedMovement();

		Pawn->OnRep_ReplicatedMovement();

		PlayerController->bHasServerFinishedLoading = true;
		PlayerController->OnRep_bHasServerFinishedLoading();

		auto PlayerState = (SDK::AFortPlayerStateAthena*)(PlayerController->PlayerState);

		PlayerState->TeamIndex = SDK::EFortTeam::HumanPvP_Team69;
		PlayerState->SquadId = 70;
		PlayerState->OnRep_SquadId();
		PlayerState->OnRep_PlayerTeam();

		PlayerState->bHasFinishedLoading = true;
		PlayerState->bHasStartedPlaying = true;
		PlayerState->OnRep_bHasStartedPlaying();
		PlayerState->OnRep_CharacterParts();

		auto NewCheatManager = (SDK::UFortCheatManager*)(SDK::UGameplayStatics::GetDefaultObj()->SpawnObject(SDK::UFortCheatManager::StaticClass(), PlayerController));
		PlayerController->CheatManager = NewCheatManager;

		InventoryNamespace::SetupInventory(PlayerController);
		InventoryNamespace::UpdateInventory(PlayerController);

		PlayerState->OnRep_HeroType();

		PlayerController->ClientRestart(Pawn);

		return PlayerController;
	}

	inline void InitHooks()
	{
		Replication::InitOffsets();

		Globals::CreateHook(Globals::GetAddress(0x317BF0), AOnlineBeaconHost_NotifyControlMessageHook, nullptr);
		Globals::CreateHook(Globals::GetAddress(0x23BCB00), WelcomePlayerHook, (void**)(&WelcomePlayer));
		Globals::CreateHook(Globals::GetAddress(0x20B2CA0), SpawnPlayActorHook, (void**)(&SpawnPlayActor));
		Globals::CreateHook(Globals::GetAddress(0xC98310), KickPatch, nullptr);


		Beacon = (SDK::AOnlineBeaconHost*)(ActorNamespace::SpawnActor(SDK::AOnlineBeaconHost::StaticClass(), {}, {}));
		Beacon->ListenPort = 7777;
		if (InitHost(Beacon))
		{
			Beacon->NetDriver->World = Globals::GetWorld();
			Globals::GetWorld()->LevelCollections[0].NetDriver = Beacon->NetDriver;
			Globals::GetWorld()->LevelCollections[1].NetDriver = Beacon->NetDriver;

			((SDK::AOnlineBeacon*)Beacon)->BeaconState = 0;

			Globals::CreateHook(Globals::GetAddress(0x2118B40), TickFlushHook, (void**)(&TickFlush));
			Globals::CreateHook(Globals::GetAddress(0x21107D0), NotifyActorDestroyedHook, (void**)(&NotifyActorDestroyed));

			Logging::Log(ELogEvent::Info, ELogType::Athena, "Server is now Listening!");
		}
	}
}