#pragma once
#include "SDK.hpp"
#include "Globals.h"
#include "FN_Basic.hpp"
#include "Actor.h"
#include "Logging.h"
#include "Beacon.h"

namespace ProcessEventNamespace
{
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
			if (FuncName.find("ReadyToStartMatch") != std::string::npos)
			{
				if (!Globals::bBeaconInitialized)
				{
					try
					{
						Beacons::InitHooks();
						Globals::bBeaconInitialized = true;

						auto World = Globals::GetWorld();
						if (World && World->GameState)
						{
							auto GameState = (SDK::AFortGameStateAthena*)(World->GameState);
							if (GameState)
							{
								GameState->GamePhase = SDK::EAthenaGamePhase::Warmup;
								GameState->OnRep_GamePhase(SDK::EAthenaGamePhase::None);
							}
						}

						if (World)
						{
							SDK::TArray<SDK::AActor*> OutHLODs;
							SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(World, SDK::AFortHLODSMActor::StaticClass(), &OutHLODs);

							for (int i = 0; i < OutHLODs.Num(); i++)
							{
								auto Actor = OutHLODs[i];
								if (Actor && !Actor->bActorIsBeingDestroyed)
								{
									Actor->K2_DestroyActor();
								}
							}
						}
					}
					catch (...)
					{
						Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "Failed to initialize beacons");
					}
				}
			}

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

			if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 &&
				FuncName.find("UpdateCamera") == std::string::npos &&
				FuncName.find("NoBase") == std::string::npos &&
				FuncName.find("ClientAckGoodMove") == std::string::npos &&
				FuncName.find("ServerMoveOld") == std::string::npos &&
				FuncName.find("ClientAdjustPosition") == std::string::npos)
			{
				Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "RPC: %s", FuncName.c_str());
			}

			if (FuncName.find("ServerReadyToStartMatch") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				if (PC)
				{
					PC->bReadyToStartMatch = true;
				}
			}

			if (FuncName.find("ServerClientPawnLoaded") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				auto Params = (SDK::AFortPlayerController_ServerClientPawnLoaded_Params*)pParams;
				if (PC && Params)
				{
					PC->bClientPawnIsLoaded = Params->bIsPawnLoaded;
				}
			}

			if (FuncName.find("ServerSetClientHasFinishedLoading") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				auto Params = (SDK::AFortPlayerController_ServerSetClientHasFinishedLoading_Params*)pParams;
				if (PC && Params)
				{
					PC->bHasClientFinishedLoading = Params->bInHasFinishedLoading;
				}
			}

			if (FuncName.find("ServerExecuteInventoryItem") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				auto Params = (SDK::AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;

				if (PC && Params && PC->WorldInventory)
				{
					auto WorldInventory = PC->WorldInventory;
					if (WorldInventory->Inventory.ItemInstances.IsValid())
					{
						auto ItemInstances = WorldInventory->Inventory.ItemInstances;

						for (int i = 0; i < ItemInstances.Num(); i++)
						{
							auto ItemInstance = ItemInstances[i];
							if (ItemInstance && Globals::ValidateGuidEquality(Params->ItemGuid, ItemInstance->GetItemGuid()))
							{
								if (PC->Pawn)
								{
									auto ItemDef = ItemInstance->GetItemDefinitionBP();
									if (ItemDef)
									{
										((SDK::AFortPlayerPawn*)PC->Pawn)->EquipWeaponDefinition((SDK::UFortWeaponItemDefinition*)ItemDef, Params->ItemGuid);
									}
								}
							}
						}
					}
				}
			}

			if (FuncName.find("ServerAttemptAircraftJump") != std::string::npos)
			{
				try
				{
					auto PC = (SDK::AFortPlayerControllerAthena*)pObject;
					if (!PC)
					{
						Logging::SafeLog(ELogEvent::Error, ELogType::ProcessEvent, "ServerAttemptAircraftJump: PlayerController is null");
						return ProcessEvent(pObject, pFunction, pParams);
					}

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

									Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "New pawn spawned for aircraft jump");
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
											Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Equipped pickaxe after aircraft jump");
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

			if (FuncName.find("ServerReturnToMainMenu") != std::string::npos)
			{
				auto PC = (SDK::AFortPlayerController*)pObject;
				if (PC)
				{
					PC->ClientTravel(L"/Game/Maps/Frontend", SDK::ETravelType::TRAVEL_Absolute, false, SDK::FGuid());
				}
			}

			if (FuncName.find("ServerHandlePickup") != std::string::npos)
			{
				auto Pawn = (SDK::AFortPlayerPawn*)pObject;
				auto Params = (SDK::AFortPlayerPawn_ServerHandlePickup_Params*)pParams;

				if (Pawn && Params && Pawn->Controller)
				{
					auto PC = Pawn->Controller;
					// picup here
				}
			}

			if (FuncName.find("ServerCreateBuildingActor") != std::string::npos)
			{
				auto PlayerController = (SDK::AFortPlayerController*)pObject;
				if (PlayerController && PlayerController->CurrentBuildableClass)
				{
					auto BuildLoc = PlayerController->LastBuildPreviewGridSnapLoc;
					auto BuildRot = PlayerController->LastBuildPreviewGridSnapRot;
					auto BuildClass = PlayerController->CurrentBuildableClass;

					auto BuildingActor = ActorNamespace::SpawnActor<SDK::ABuildingActor>(BuildLoc, BuildRot, BuildClass);
					if (BuildingActor)
					{
						BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
					}
				}
			}

			if (FuncName.find("ServerPlayEmoteItem") != std::string::npos)
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
								auto ControllerFromObject = (SDK::AFortPlayerControllerAthena*)pObject;
								if (ControllerFromObject && ControllerFromObject->Pawn)
								{
									auto AthenaPlayerPawn = (SDK::AFortPlayerPawnAthena*)ControllerFromObject->Pawn;
									auto Params = (SDK::AFortPlayerController_ServerPlayEmoteItem_Params*)pParams;

									if (AthenaPlayerPawn && Params && Params->EmoteAsset &&
										!ControllerFromObject->bIsPlayerActivelyMoving)
									{
										if (AthenaPlayerPawn->bIsCrouched)
										{
											AthenaPlayerPawn->UnCrouch(true);
										}

										auto EmoteAsset = Params->EmoteAsset;
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
		auto PC = reinterpret_cast<SDK::AFortPlayerController*>(Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		PC->SwitchLevel(L"Athena_Terrain");
		Globals::CreateHook(Globals::GetAddress(SDK::Offsets::ProcessEvent), ProcessEventHook, (void**)&ProcessEvent);
	}
}