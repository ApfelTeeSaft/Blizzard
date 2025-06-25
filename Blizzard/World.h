#pragma once
#include "SDK.hpp"
#include "Globals.h"

namespace World
{
	void Initialize()
	{
		SDK::UKismetSystemLibrary::ExecuteConsoleCommand(Globals::GetWorld(), L"open Athena_Terrain", nullptr);
		Globals::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
		*(bool*)Globals::GetAddress(0x46AD734) = false;
		Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "GIsClient should now be False!");
		for (uintptr_t FuncToNull : std::vector<uintptr_t>{ 0xB6C9E0, 0xE2FA50 })
		{
			uintptr_t func = Globals::GetAddress(FuncToNull);
			DWORD dwProtection;
			VirtualProtect((PVOID)func, 1, PAGE_EXECUTE_READWRITE, &dwProtection);
			*(uint8_t*)func = 0xC3;
			DWORD dwTemp;
			VirtualProtect((PVOID)func, 1, dwProtection, &dwTemp);
		}
		Logging::SafeLog(ELogEvent::Info, ELogType::ProcessEvent, "Nulled out: '0xB6C9E0, 0xE2FA50'");
	}
}