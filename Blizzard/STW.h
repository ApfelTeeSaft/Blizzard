#pragma once
#include "SDK.hpp"
#include "Globals.h"
#include "Replication.h"
#include <Windows.h>

// WIP
namespace STWNamespace
{
	void Initialize()
	{
		Logging::Log(ELogEvent::Info, ELogType::STW, "Initializing STW...");
		
		Replication::InitOffsets();

		Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController->SwitchLevel(L"Zone_Onboarding_FarmsteadFort"); // Tutorial Map

		Logging::SafeLog(ELogEvent::Info, ELogType::STW, "=== Starting World Initialization ===");
		Logging::SafeLog(ELogEvent::Info, ELogType::STW, "Setting GIsClient to false...");
		auto gIsClientAddr = Globals::GetAddress(0x46AD734);
		DWORD oldProtect;
		if (VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), PAGE_READWRITE, &oldProtect))
		{
			*(bool*)gIsClientAddr = false;
			VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), oldProtect, &oldProtect);
			Logging::SafeLog(ELogEvent::Info, ELogType::STW, "GIsClient set to false successfully");
		}
		else
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::STW, "Failed to change memory protection for GIsClient");
		}

		Logging::SafeLog(ELogEvent::Info, ELogType::STW, "Nulling out functions...");

		// I have no clue wether these are needed in STW, or only in BR
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
				Logging::SafeLog(ELogEvent::Info, ELogType::STW, "Successfully nulled function at 0x%llX", funcAddr);
			}
			else
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::STW, "Failed to change protection for function at 0x%llX", funcAddr);
			}
		}

		Logging::SafeLog(ELogEvent::Info, ELogType::STW, "=== World Initialization Completed ===");
	}
}