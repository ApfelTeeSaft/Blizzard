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
		Logging::Log(ELogEvent::Info, ELogType::Athena, "ProcessEvent Called");
		auto ObjName = pObject->GetName();
		auto FuncName = pFunction->GetName();

		if (FuncName.find("ReadyToStartMatch") != std::string::npos)
		{
			if (!Globals::bBeaconInitialized) {

				Beacons::InitHooks();

				Globals::bBeaconInitialized = true;

				auto GameState = (SDK::AFortGameStateAthena*)(Globals::GetWorld()->GameState);
				GameState->GamePhase = SDK::EAthenaGamePhase::Warmup;
				GameState->OnRep_GamePhase(SDK::EAthenaGamePhase::None);

				SDK::TArray<SDK::AActor*> OutHLODs;
				SDK::UGameplayStatics::GetDefaultObj()->GetAllActorsOfClass(Globals::GetWorld(), SDK::AFortHLODSMActor::StaticClass(), &OutHLODs);
				for (int i = 0; i < OutHLODs.Num(); i++)
				{
					auto Actor = OutHLODs[i];

					if (Actor)
					{
						Actor->K2_DestroyActor();
					}
				}
			}
		}

		if (FuncName.find("AircraftExitedDropZone") != std::string::npos)
		{
			for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
			{
				auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];

				if (Connection && Connection->PlayerController)
				{
					auto FortPlayerController = (SDK::AFortPlayerControllerAthena*)(Connection->PlayerController);

					if (FortPlayerController->IsInAircraft() && FortPlayerController->Pawn)
					{
						FortPlayerController->ServerAttemptAircraftJump({});
					}
				}
			}
		}

		if (pFunction->FunctionFlags & 0x01000000 || pFunction->FunctionFlags & 0x00200000 &&
			!FuncName.find("UpdateCamera") &&
			!FuncName.find("NoBase") &&
			!FuncName.find("ClientAckGoodMove") &&
			!FuncName.find("ServerMoveOld") &&
			!FuncName.find("ClientAdjustPosition"))
		{
			Logging::Log(ELogEvent::Info, ELogType::Athena, "RPC: %s", FuncName.c_str());
		}


		if (FuncName.find("ServerReadyToStartMatch"))
		{
			auto PC = (SDK::AFortPlayerController*)pObject;
			PC->bReadyToStartMatch = true;
		}

		if (FuncName.find("ServerClientPawnLoaded"))
		{
			auto PC = (SDK::AFortPlayerController*)pObject;
			auto Params = (SDK::AFortPlayerController_ServerClientPawnLoaded_Params*)pParams;
			PC->bClientPawnIsLoaded = Params->bIsPawnLoaded;
		}

		if (FuncName.find("ServerSetClientHasFinishedLoading"))
		{
			auto PC = (SDK::AFortPlayerController*)pObject;
			auto Params = (SDK::AFortPlayerController_ServerSetClientHasFinishedLoading_Params*)pParams;
			PC->bHasClientFinishedLoading = Params->bInHasFinishedLoading;
		}

		if (FuncName.find("ServerExecuteInventoryItem"))
		{
			auto PC = (SDK::AFortPlayerController*)pObject;
			auto Params = (SDK::AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;

			if (PC)
			{
				auto WorldInventory = PC->WorldInventory;
				if (WorldInventory) {
					auto ItemInstances = WorldInventory->Inventory.ItemInstances;

					for (int i = 0; i < ItemInstances.Num(); i++)
					{
						auto ItemInstance = ItemInstances[i];

						if (Globals::ValidateGuidEquality(Params->ItemGuid, ItemInstance->GetItemGuid()))
						{
							if (PC->Pawn)
								((SDK::AFortPlayerPawn*)PC->Pawn)->EquipWeaponDefinition((SDK::UFortWeaponItemDefinition*)ItemInstance->GetItemDefinitionBP(), Params->ItemGuid);
						}
					}
				}
			}
		}

		if (FuncName.find("ServerAttemptAircraftJump"))
		{
			auto PC = (SDK::AFortPlayerControllerAthena*)pObject;

			if (PC->Pawn)
				PC->Pawn->K2_DestroyActor();

			auto NewPawn = (SDK::APlayerPawn_Athena_C*)(ActorNamespace::SpawnActor(SDK::APlayerPawn_Athena_C::StaticClass(), ((SDK::AFortGameStateAthena*)Globals::GetWorld()->GameState)->Aircraft->K2_GetActorLocation(), {}));
			if (NewPawn) {
				PC->Possess(NewPawn);

				((SDK::AFortPlayerState*)NewPawn->PlayerState)->OnRep_PlayerTeam();

				auto PickaxeGuid = PC->QuickBars->PrimaryQuickBar.Slots[0].Items[0];
				PC->ServerExecuteInventoryItem(PickaxeGuid);
			}
		}

		if (FuncName.find("ServerReturnToMainMenu"))
		{
			auto PC = (SDK::AFortPlayerController*)pObject;
			PC->ClientTravel(L"/Game/Maps/Frontend", SDK::ETravelType::TRAVEL_Absolute, false, SDK::FGuid());
		}

		if (FuncName.find("ServerHandlePickup"))
		{
			auto Pawn = (SDK::AFortPlayerPawn*)pObject;
			auto Params = (SDK::AFortPlayerPawn_ServerHandlePickup_Params*)pParams;

			if (Pawn)
			{
				auto PC = Pawn->Controller;
				if (PC)
				{

				}
			}
		}

		if (FuncName.find("ServerCreateBuildingActor"))
		{
			auto PlayerController = (SDK::AFortPlayerController*)pObject;
			if (PlayerController)
			{
				auto BuildLoc = PlayerController->LastBuildPreviewGridSnapLoc;
				auto BuildRot = PlayerController->LastBuildPreviewGridSnapRot;
				auto BuildClass = PlayerController->CurrentBuildableClass;
				auto BuildingActor = ActorNamespace::SpawnActor<SDK::ABuildingActor>(BuildLoc, BuildRot, BuildClass);
				if (BuildingActor) {
					BuildingActor->InitializeKismetSpawnedBuildingActor(BuildingActor, PlayerController);
				}
			}
		}

		// idk
		if (FuncName.find("ServerPlayEmoteItem") != std::string::npos)
		{
			for (int i = 0; i < Beacons::Beacon->NetDriver->ClientConnections.Num(); i++)
			{
				auto Connection = Beacons::Beacon->NetDriver->ClientConnections[i];
				if (Connection && Connection->PlayerController)
				{
					auto ControllerFromObject = (SDK::AFortPlayerControllerAthena*)pObject;
					auto AthenaPlayerPawn = (SDK::AFortPlayerPawnAthena*)ControllerFromObject->Pawn;
					if (!ControllerFromObject->bIsPlayerActivelyMoving)
					{
						if (AthenaPlayerPawn->bIsCrouched) AthenaPlayerPawn->UnCrouch(true);
						auto EmoteAsset = static_cast<SDK::AFortPlayerController_ServerPlayEmoteItem_Params*>(pParams)->EmoteAsset;

						auto Montage = EmoteAsset->GetAnimationHardReference(SDK::EFortCustomBodyType::All, SDK::EFortCustomGender::Both);
						if (AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage != Montage)
						{
							AthenaPlayerPawn->RepAnimMontageInfo.AnimMontage = Montage;
							AthenaPlayerPawn->RepAnimMontageInfo.PlayRate = 1;
							AthenaPlayerPawn->RepAnimMontageInfo.IsStopped = false;
							AthenaPlayerPawn->RepAnimMontageInfo.SkipPositionCorrection = true;
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

		return ProcessEvent(pObject, pFunction, pParams);
	}

	void Initialize()
	{
		auto PC = reinterpret_cast<SDK::AFortPlayerController*>(Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		PC->SwitchLevel(L"Athena_Terrain");
		Globals::CreateHook(Globals::GetAddress(Offsets::ProcessEvent), ProcessEventHook, (void**)&ProcessEvent);
	}
}