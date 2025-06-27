#pragma once
#include <vector>
#include "SDK.hpp"
#include "Globals.h"
#include "FN_Basic.hpp"
#include "Actor.h"
#include "Logging.h"
#include "Beacon.h"

namespace ProcessEventNamespace
{
	bool (*oReadyToStartMatch)(void*);
	bool hkReadyToStartMatch(SDK::AFortGameModeAthena* GameMode)
	{
		if (!Globals::bBeaconInitialized)
		{
			try
			{
				Beacons::InitHooks();
				Globals::bBeaconInitialized = true;

				Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Set Globals::bBeaconInitialized to true");
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed to initialize beacons");
				Globals::bBeaconInitialized = false;
			}
		}

		return oReadyToStartMatch(GameMode);
	}

	void (*oServerReadyToStartMatch)(SDK::AFortPlayerControllerAthena* PlayerController);
	void hkServerReadyToStartMatch(SDK::AFortPlayerControllerAthena* PlayerController)
	{
		auto PC = (SDK::AFortPlayerController*)PlayerController;
		if (PC)
		{
			PC->bReadyToStartMatch = true;
		}
	}

	void hkServerExecuteInventoryItem(SDK::AFortPlayerControllerAthena* PlayerController, SDK::FGuid ItemGuid)
	{
		auto PC = (SDK::AFortPlayerController*)PlayerController;

		if (PC && PC->WorldInventory)
		{
			auto WorldInventory = PC->WorldInventory;
			if (WorldInventory->Inventory.ItemInstances.IsValid())
			{
				auto ItemInstances = WorldInventory->Inventory.ItemInstances;

				for (int i = 0; i < ItemInstances.Num(); i++)
				{
					auto ItemInstance = ItemInstances[i];
					if (ItemInstance && Globals::ValidateGuidEquality(ItemGuid, ItemInstance->GetItemGuid()))
					{
						if (PC->Pawn)
						{
							auto ItemDef = ItemInstance->GetItemDefinitionBP();
							if (ItemDef)
							{
								((SDK::AFortPlayerPawn*)PC->Pawn)->EquipWeaponDefinition((SDK::UFortWeaponItemDefinition*)ItemDef, ItemGuid);
							}
						}
					}
				}
			}
		}
	}

	static void ServerAttemptAircraftJumpHook(SDK::AFortPlayerController* PlayerController, SDK::FRotator ClientRotation)
	{
		try
		{
			auto PC = (SDK::AFortPlayerControllerAthena*)PlayerController;

			try
			{
				if (PC->Pawn && !PC->Pawn->bActorIsBeingDestroyed)
				{
					PC->Pawn->K2_DestroyActor();
				}
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception destroying old pawn");
			}

			SDK::APlayerPawn_Athena_C* NewPawn = nullptr;
			try
			{
				auto World = Globals::GetWorld();
				if (World && World->GameState)
				{
					auto GameState = (SDK::AFortGameStateAthena*)World->GameState;
					if (GameState && GameState->Aircraft)
					{
						auto SpawnLocation = GameState->Aircraft->K2_GetActorLocation();
						NewPawn = (SDK::APlayerPawn_Athena_C*)(ActorNamespace::SpawnActor(SDK::APlayerPawn_Athena_C::StaticClass(), SpawnLocation, {}));

						if (NewPawn)
						{
							PC->Possess(NewPawn);

							if (NewPawn->PlayerState)
							{
								((SDK::AFortPlayerState*)NewPawn->PlayerState)->OnRep_PlayerTeam();
							}
						}
						else
						{
							Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed to spawn new pawn");
						}
					}
					else
					{
						Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "GameState or Aircraft is null");
					}
				}
				else
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "World or GameState is null");
				}
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception spawning new pawn");
			}

			if (NewPawn && PC)
			{
				try
				{
					if (PC->QuickBars)
					{
						auto QuickBars = PC->QuickBars;

						if (QuickBars->PrimaryQuickBar.Slots.IsValid() &&
							QuickBars->PrimaryQuickBar.Slots.Num() > 0)
						{
							auto& FirstSlot = QuickBars->PrimaryQuickBar.Slots[0];

							if (FirstSlot.Items.IsValid() && FirstSlot.Items.Num() > 0)
							{
								auto PickaxeGuid = FirstSlot.Items[0];

								bool isValidGuid = (PickaxeGuid.A != 0 || PickaxeGuid.B != 0 ||
									PickaxeGuid.C != 0 || PickaxeGuid.D != 0);

								if (isValidGuid)
								{
									PC->ServerExecuteInventoryItem(PickaxeGuid);
								}
								else
								{
									Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "Pickaxe GUID is invalid");
								}
							}
							else
							{
								Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "No items in quickbar slot 0");
							}
						}
						else
						{
							Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "PrimaryQuickBar slots not initialized");
						}
					}
					else
					{
						Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "QuickBars is null");
					}
				}
				catch (...)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception during quickbar access");
				}
			}
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Critical exception in ServerAttemptAircraftJump");
		}
	}

	void hkServerReturnToMainMenu(SDK::AFortPlayerControllerAthena* PlayerController)
	{
		auto PC = (SDK::AFortPlayerController*)PlayerController;
		if (PC)
		{
			PC->ClientTravel(L"/Game/Maps/Frontend", SDK::ETravelType::TRAVEL_Absolute, false, SDK::FGuid());
		}
	}

	void (*oServerHandlePickup)(SDK::APlayerPawn_Athena_C* Pawn, SDK::AFortPickup* Pickup, float InFlyTime, SDK::FVector InStartDirection, bool bPlayPickupSound);
	void hkServerHandlePickup(SDK::APlayerPawn_Athena_C* Pawn, SDK::AFortPickup* Pickup, float InFlyTime, SDK::FVector InStartDirection, bool bPlayPickupSound)
	{

		if (Pawn && Pawn->Controller)
		{
			auto PC = Pawn->Controller;
			// picup here
		}
	}

	bool(__fastcall* CantBuild)(SDK::UWorld*, SDK::UObject*, SDK::FVector, SDK::FRotator, char, void*, char*) = decltype(CantBuild)(Globals::GetAddress(0xb8e580));
	void hkServerCreateBuildingActor(SDK::AFortPlayerControllerAthena* PlayerController, SDK::FBuildingClassData& BuildingClassData, SDK::FVector_NetQuantize10& BuildLoc, SDK::FRotator& BuildRot, bool bMirrored)
	{
		if (PlayerController && PlayerController->CurrentBuildableClass)
		{
			auto BuildLoc = PlayerController->LastBuildPreviewGridSnapLoc;
			auto BuildRot = PlayerController->LastBuildPreviewGridSnapRot;
			auto BuildClass = PlayerController->CurrentBuildableClass;

			auto BuildingActor = ActorNamespace::SpawnActor<SDK::ABuildingActor>(BuildClass, BuildLoc, BuildRot);

			if (BuildingActor)
			{
				Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Successfully spawned building actor");

				try
				{
					BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
					Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Building actor initialized successfully");
				}
				catch (...)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception during building actor initialization");
				}
			}
			else
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed to spawn building actor");

				try
				{
					auto BuildingActor = ActorNamespace::SpawnActor<SDK::ABuildingActor>(BuildClass, BuildLoc, BuildRot);
					if (BuildingActor)
					{
						BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
						Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Building actor spawned using fallback method");
					}
				}
				catch (...)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Both spawn methods failed for building actor");
				}
			}
		}
		else
		{
			if (!PlayerController)
				Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "PlayerController is null in hkServerCreateBuildingActor");
			if (!PlayerController->CurrentBuildableClass)
				Logging::SafeLog(ELogEvent::Warning, ELogType::ProcessEvent, "CurrentBuildableClass is null in hkServerCreateBuildingActor");
		}
	}

	void hkServerPlayEmoteItem(SDK::AFortPlayerController* PlayerController, SDK::UFortMontageItemDefinitionBase* EmoteAsset)
	{
		try
		{
			if (Beacons::Beacon && Beacons::Beacon->NetDriver &&
				Beacons::Beacon->NetDriver->ClientConnections.IsValid())
			{
				for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
				{
					auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];
					if (Connection && Connection->PlayerController)
					{
						auto ControllerFromObject = (SDK::AFortPlayerControllerAthena*)PlayerController;
						if (ControllerFromObject && ControllerFromObject->Pawn)
						{
							auto AthenaPlayerPawn = (SDK::AFortPlayerPawnAthena*)ControllerFromObject->Pawn;

							if (AthenaPlayerPawn && EmoteAsset &&
								!ControllerFromObject->bIsPlayerActivelyMoving)
							{
								if (AthenaPlayerPawn->bIsCrouched)
								{
									AthenaPlayerPawn->UnCrouch(true);
								}

								auto Montage = EmoteAsset->GetAnimationHardReference(SDK::EFortCustomBodyType::All, SDK::EFortCustomGender::Both);

								if (Montage && AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage != Montage)
								{
									AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage = Montage;
									AthenaPlayerPawn->RepAnimMontageInfo.PlayRate = 1;
									AthenaPlayerPawn->RepAnimMontageInfo.IsStopped = false;
									AthenaPlayerPawn->RepAnimMontageInfo.SkipPositionCorrection = true;

									if (AthenaPlayerPawn->Mesh && AthenaPlayerPawn->Mesh->GetAnimInstance())
									{
										auto AnimInstance = AthenaPlayerPawn->Mesh->GetAnimInstance();
										auto playemote = AnimInstance->Montage_Play(Montage, 1, SDK::EMontagePlayReturnType::Duration, 0, false);

										AthenaPlayerPawn->OnRep_ReplicatedAnimMontage();
										AthenaPlayerPawn->OnRep_AttachmentMesh();
										AthenaPlayerPawn->OnRep_AttachmentReplication();
										AthenaPlayerPawn->OnRep_ReplicateMovement();
									}
								}
							}
						}
					}
				}
			}
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed in ServerPlayEmoteItem handling");
		}
	}

	__int64 (*oCollectGarbage)(__int64);
	__int64 hkCollectGarbage(__int64)
	{
		return 0;
	}

	LPVOID(*ProcessEvent)(void*, void*, void*);
	LPVOID ProcessEventHook(SDK::UObject* pObject, SDK::UFunction* pFunction, LPVOID pParams)
	{
		if (!pObject || !pFunction || !ProcessEvent)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "ProcessEventHook: Null parameter detected");
			if (ProcessEvent && pObject && pFunction)
				return ProcessEvent(pObject, pFunction, pParams);
			return nullptr;
		}

		std::string ObjName;
		std::string FuncName;

		try
		{
			ObjName = pObject->GetName();
			FuncName = pFunction->GetName();
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "ProcessEventHook: Failed to get object/function names");
			return ProcessEvent(pObject, pFunction, pParams);
		}

		if (ObjName.empty() || FuncName.empty())
		{
			return ProcessEvent(pObject, pFunction, pParams);
		}

		try
		{

			if (FuncName.find("AircraftExitedDropZone") != std::string::npos)
			{
				try
				{
					if (Beacons::Beacon && Beacons::Beacon->NetDriver &&
						Beacons::Beacon->NetDriver->ClientConnections.IsValid())
					{
						for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
						{
							auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];
							if (Connection && Connection->PlayerController)
							{
								auto FortPlayerController = (SDK::AFortPlayerControllerAthena*)(Connection->PlayerController);
								if (FortPlayerController && FortPlayerController->IsInAircraft() && FortPlayerController->Pawn)
								{
									FortPlayerController->ServerAttemptAircraftJump({});
								}
							}
						}
					}
				}
				catch (...)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed in AircraftExitedDropZone handling");
				}
			}

			if (FuncName.find("ServerClientPawnLoaded") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				auto Params = (SDK::AFortPlayerController_ServerClientPawnLoaded_Params*)pParams;
				if (PC && Params)
				{
					PC->bClientPawnIsLoaded = Params->bIsPawnLoaded;
					Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "PlayerController->bClientPawnIsLoaded = %s", Params->bIsPawnLoaded);
				}
			}

			if (FuncName.find("ServerSetClientHasFinishedLoading") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				auto Params = (SDK::AFortPlayerController_ServerSetClientHasFinishedLoading_Params*)pParams;
				if (PC && Params)
				{
					PC->bHasClientFinishedLoading = Params->bInHasFinishedLoading;
					Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "PlayerController->bHasClientFinishedLoading = %s", Params->bInHasFinishedLoading);
				}
			}
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception in ProcessEventHook for function: %s", FuncName.c_str());
		}

		try
		{
			return ProcessEvent(pObject, pFunction, pParams);
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Exception calling original ProcessEvent");
			return nullptr;
		}
	}

	void Initialize()
	{
		// Globals::CreateHook(Globals::GetAddress(SDK::Offsets::ProcessEvent), ProcessEventHook, (void**)&ProcessEvent);

		auto result1 = Globals::CreateHook(Globals::GetAddress(0x236E670), hkCollectGarbage);
		if (result1 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook CollectGarbage: %d", result1);
			return;
		}

		auto result2 = Globals::CreateHook(Globals::GetAddress(0x240F4A0), hkReadyToStartMatch, (void**)(&oReadyToStartMatch));
		if (result2 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ReadyToStartMatch: %d", result1);
			return;
		}
		auto result3 = Globals::CreateHook(Globals::GetAddress(0x1072E40), hkServerReadyToStartMatch, (void**)(&oServerReadyToStartMatch));
		if (result3 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerReadyToStartMatch: %d", result1);
			return;
		}

		auto result4 = Globals::CreateHook(Globals::GetAddress(0x1071E10), hkServerExecuteInventoryItem);
		if (result4 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerExecuteInventoryItem: %d", result1);
			return;
		}
		auto result5 = Globals::CreateHook(Globals::GetAddress(0x107B910), ServerAttemptAircraftJumpHook);
		if (result5 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerAttemptAircraftJump: %d", result1);
			return;
		}
		auto result6 = Globals::CreateHook(Globals::GetAddress(0x1073830), hkServerReturnToMainMenu);
		if (result6 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerReturnToMainMenu: %d", result1);
			return;
		}
		auto result7 = Globals::CreateHook(Globals::GetAddress(0x1084A90), hkServerHandlePickup, (void**)(&oServerHandlePickup));
		if (result7 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerHandlePickup: %d", result1);
			return;
		}

		auto result8 = Globals::CreateHook(Globals::GetAddress(0x10715A0), hkServerCreateBuildingActor);
		if (result8 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerCreateBuildingActor: %d", result1);
			return;
		}
		auto result9 = Globals::CreateHook(Globals::GetAddress(0x1072D80), hkServerPlayEmoteItem);
		if (result9 != MH_OK)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to hook ServerPlayEmoteItem: %d", result1);
			return;
		}
	}
}