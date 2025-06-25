#pragma once
#include "SDK.hpp"
#include "Globals.h"

namespace World
{
	bool bLevelSwitchPending = false;

	bool SafeSwitchLevel()
	{
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== Starting Safe Level Switch ===");

		auto engine = Globals::GetEngine();
		if (!engine)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Engine is null - cannot switch level");
			return false;
		}
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Engine validated: %s", engine->GetName().c_str());

		if (!engine->GameInstance)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GameInstance is null");
			return false;
		}
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "GameInstance validated");

		if (!engine->GameInstance->LocalPlayers.IsValid())
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "LocalPlayers array is invalid");
			return false;
		}

		if (engine->GameInstance->LocalPlayers.Num() == 0)
		{
			Logging::SafeLog(ELogEvent::Warning, ELogType::Athena, "No LocalPlayers found - cannot switch level");
			return false;
		}
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "LocalPlayers count: %d", engine->GameInstance->LocalPlayers.Num());

		auto localPlayer = engine->GameInstance->LocalPlayers[0];
		if (!localPlayer)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "LocalPlayer[0] is null");
			return false;
		}

		auto playerController = localPlayer->PlayerController;
		if (!playerController)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "PlayerController is null");
			return false;
		}

		auto fortPlayerController = reinterpret_cast<SDK::AFortPlayerController*>(playerController);
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "PlayerController validated: %s", fortPlayerController->GetName().c_str());

		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Attempting to switch to Athena_Terrain...");

		fortPlayerController->SwitchLevel(TEXT("Athena_Terrain"));

		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "SwitchLevel command issued successfully");
		return true;
	}

	void Initialize()
	{
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== Starting World Initialization ===");

		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Setting GIsClient to false...");
		auto gIsClientAddr = Globals::GetAddress(0x46AD734);
		DWORD oldProtect;
		if (VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), PAGE_READWRITE, &oldProtect))
		{
			*(bool*)gIsClientAddr = false;
			VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), oldProtect, &oldProtect);
			Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "GIsClient set to false successfully");
		}
		else
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to change memory protection for GIsClient");
		}

		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Nulling out functions...");
		std::vector<uintptr_t> functionsToNull = { 0xB6C9E0, 0xE2FA50 };

		for (size_t i = 0; i < functionsToNull.size(); i++)
		{
			uintptr_t funcAddr = Globals::GetAddress(functionsToNull[i]);
			DWORD dwProtection;
			if (VirtualProtect((PVOID)funcAddr, 1, PAGE_EXECUTE_READWRITE, &dwProtection))
			{
				*(uint8_t*)funcAddr = 0xC3;
				DWORD dwTemp;
				VirtualProtect((PVOID)funcAddr, 1, dwProtection, &dwTemp);
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Successfully nulled function at 0x%llX", funcAddr);
			}
			else
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to change protection for function at 0x%llX", funcAddr);
			}
		}

		bLevelSwitchPending = true;
		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Level switch marked as pending - will be triggered later");

		Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== World Initialization Completed ===");
	}
}