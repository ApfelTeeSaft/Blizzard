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
		UC::TArray<SDK::AActor*> OutActors;
		SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::APlayerStart::StaticClass(), &OutActors);

		if (OutActors.IsValid() && OutActors.Num() > 0)
		{
			auto result = OutActors[rand() % OutActors.Num()]->K2_GetActorLocation();

			if (OutActors.GetDataPtr())
			{
				SDK::FreeInternal((__int64)const_cast<SDK::AActor**>(OutActors.GetDataPtr()));
				OutActors.Clear();
			}

			return result;
		}
		return SDK::FVector{ 0.0f, 0.0f, 0.0f };
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
		try
		{
			if (!Connection)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Connection is null");
				return nullptr;
			}

			auto PlayerController = (SDK::AFortPlayerControllerAthena*)SpawnPlayActor(Globals::GetWorld(), Connection, NetRole, a4, a5, Src, a7);
			if (!PlayerController)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Failed to spawn player controller");
				return nullptr;
			}

			Connection->PlayerController = PlayerController;
			PlayerController->NetConnection = Connection;
			Connection->OwningActor = PlayerController;

			auto Pawn = (SDK::APlayerPawn_Athena_C*)(ActorNamespace::SpawnActor(SDK::APlayerPawn_Athena_C::StaticClass(), GetPlayerStart(), {}));
			if (!Pawn)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Failed to spawn pawn");
				return PlayerController;
			}

			Pawn->SetOwner(PlayerController);
			PlayerController->Possess(Pawn);

			try
			{
				PlayerController->ClientForceProfileQuery();
				Pawn->OnRep_CustomizationLoadout();

				auto HeadPart = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Head1.F_Med_Head1");
				auto BodyPart = SDK::UObject::FindObject<SDK::UCustomCharacterPart>("CustomCharacterPart F_Med_Soldier_01.F_Med_Soldier_01");

				if (HeadPart)
					Pawn->ServerChoosePart(SDK::EFortCustomPartType::Head, HeadPart);
				if (BodyPart)
					Pawn->ServerChoosePart(SDK::EFortCustomPartType::Body, BodyPart);

				if (Pawn->PlayerState)
				{
					((SDK::AFortPlayerStateAthena*)Pawn->PlayerState)->OnRep_CharacterParts();
				}
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during customization setup");
			}

			try
			{
				if (Pawn->CharacterMovement)
				{
					Pawn->CharacterMovement->bReplicates = true;
				}
				Pawn->SetReplicateMovement(true);
				Pawn->OnRep_ReplicatedBasedMovement();
				Pawn->OnRep_ReplicatedMovement();
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during movement setup");
			}

			try
			{
				PlayerController->bHasServerFinishedLoading = true;
				PlayerController->OnRep_bHasServerFinishedLoading();
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during loading state setup");
			}

			try
			{
				auto PlayerState = (SDK::AFortPlayerStateAthena*)(PlayerController->PlayerState);
				if (PlayerState)
				{
					PlayerState->TeamIndex = SDK::EFortTeam::HumanPvP_Team1;
					PlayerState->SquadId = 1;
					PlayerState->bHasFinishedLoading = true;
					PlayerState->bHasStartedPlaying = true;
					PlayerState->OnRep_SquadId();
					PlayerState->OnRep_PlayerTeam();
					PlayerState->OnRep_bHasStartedPlaying();
					PlayerState->OnRep_CharacterParts();

					Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Player assigned to Team1, Squad1");
				}
				else
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "PlayerState is null during team assignment");
				}
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during team/squad assignment");
			}

			try
			{
				auto NewCheatManager = (SDK::UFortCheatManager*)(SDK::UGameplayStatics::GetDefaultObj()->SpawnObject(SDK::UFortCheatManager::StaticClass(), PlayerController));
				if (NewCheatManager)
				{
					PlayerController->CheatManager = NewCheatManager;
				}
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during cheat manager setup");
			}

			try
			{
				InventoryNamespace::SetupInventory(PlayerController);
				InventoryNamespace::UpdateInventory(PlayerController);
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during inventory setup");
			}

			try
			{
				auto PlayerState = (SDK::AFortPlayerStateAthena*)(PlayerController->PlayerState);
				if (PlayerState)
				{
					PlayerState->OnRep_HeroType();
				}
				PlayerController->ClientRestart(Pawn);
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnPlayActorHook: Exception during final setup");
			}

			Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Player spawned successfully");
			return PlayerController;
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in SpawnPlayActorHook");
			return nullptr;
		}
	}

    inline void InitHooks()
    {
        try
        {
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Starting beacon initialization...");
            try
            {
                Replication::InitOffsets();
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Replication offsets initialized");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to initialize replication offsets");
                return;
            }

            try
            {
                auto result1 = Globals::CreateHook(Globals::GetAddress(0x317BF0), AOnlineBeaconHost_NotifyControlMessageHook, nullptr);
                if (result1 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook NotifyControlMessage: %d", result1);
                    return;
                }

                auto result2 = Globals::CreateHook(Globals::GetAddress(0x23BCB00), WelcomePlayerHook, (void**)(&WelcomePlayer));
                if (result2 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook WelcomePlayer: %d", result2);
                    return;
                }

                auto result3 = Globals::CreateHook(Globals::GetAddress(0x20B2CA0), SpawnPlayActorHook, (void**)(&SpawnPlayActor));
                if (result3 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook SpawnPlayActor: %d", result3);
                    return;
                }

                auto result4 = Globals::CreateHook(Globals::GetAddress(0x2000E70), KickPatch, nullptr);
                if (result4 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook KickPatch: %d", result4);
                    return;
                }

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "All hooks installed successfully");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during hook installation");
                return;
            }

            // Create beacon actor
            try
            {
                auto World = Globals::GetWorld();
                if (!World)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to get world for beacon creation");
                    return;
                }

                Beacon = (SDK::AOnlineBeaconHost*)(ActorNamespace::SpawnActor(SDK::AOnlineBeaconHost::StaticClass(), {}, {}));
                if (!Beacon)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to spawn beacon actor");
                    return;
                }

                Beacon->ListenPort = 7777;
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Beacon actor created, attempting to initialize host...");

                InitHost = decltype(InitHost)(Globals::GetAddress(0x314ae0));
                if (!InitHost)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "InitHost function pointer is null");
                    return;
                }

                bool hostInitResult = InitHost(Beacon);
                if (!hostInitResult)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "InitHost returned false");
                    return;
                }

                if (!Beacon->NetDriver)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Beacon NetDriver is null after InitHost");
                    return;
                }

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Host initialized successfully");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during beacon creation");
                return;
            }

            try
            {
                auto World = Globals::GetWorld();
                if (!World)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "World is null during NetDriver configuration");
                    return;
                }

                Beacon->NetDriver->World = World;

                if (World->LevelCollections.IsValid() && World->LevelCollections.Num() >= 2)
                {
                    World->LevelCollections[0].NetDriver = Beacon->NetDriver;
                    World->LevelCollections[1].NetDriver = Beacon->NetDriver;
                }
                else
                {
                    Logging::SafeLog(ELogEvent::Warning, ELogType::Athena, "LevelCollections not available or insufficient count");
                }

                ((SDK::AOnlineBeacon*)Beacon)->BeaconState = 0;

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "NetDriver configured successfully");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during NetDriver configuration");
                return;
            }

            try
            {
                auto result5 = Globals::CreateHook(Globals::GetAddress(0x2118b40), TickFlushHook, (void**)(&TickFlush));
                if (result5 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook TickFlush: %d", result5);
                    return;
                }

                auto result6 = Globals::CreateHook(Globals::GetAddress(0x21107D0), NotifyActorDestroyedHook, (void**)(&NotifyActorDestroyed));
                if (result6 != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook NotifyActorDestroyed: %d", result6);
                    return;
                }

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Final hooks installed successfully");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during final hook installation");
                return;
            }

            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Server is now Listening!");
        }
        catch (...)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in InitHooks");
        }
    }
}