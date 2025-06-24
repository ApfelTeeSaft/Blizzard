#pragma once
#include <cstdint>
#include <Windows.h>
#include "MinHook/include/MinHook.h"
#include "SDK.hpp"

namespace Globals
{
	bool bBeaconInitialized = false;

	SDK::UFortEngine* GetEngine()
	{
		try
		{
			if (!SDK::UObject::GObjects)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GObjects is null - SDK not properly initialized");
				return nullptr;
			}

			SDK::UFortEngine* FortEngine = SDK::UObject::FindObject<SDK::UFortEngine>("FortEngine Transient.FortEngine_0");

			if (!FortEngine)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to find FortEngine object - game may not be fully loaded");
				return nullptr;
			}

			if (IsBadReadPtr(FortEngine, sizeof(void*)))
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "FortEngine pointer is invalid/corrupted");
				return nullptr;
			}

			Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Successfully retrieved FortEngine at 0x%p", FortEngine);
			return FortEngine;
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception occurred while getting FortEngine");
			return nullptr;
		}
	}

	SDK::AFortPlayerController* GetPlayerController()
	{
		SDK::UFortEngine* engine = GetEngine();
		if (!engine || !engine->GameInstance ||
			!engine->GameInstance->LocalPlayers.IsValid() ||
			engine->GameInstance->LocalPlayers.Num() == 0 ||
			!engine->GameInstance->LocalPlayers[0] ||
			!engine->GameInstance->LocalPlayers[0]->PlayerController)
		{
			Logging::Log(ELogEvent::Error, ELogType::Athena, "Failed to get PlayerController - invalid chain");
			return nullptr;
		}

		return reinterpret_cast<SDK::AFortPlayerController*>(engine->GameInstance->LocalPlayers[0]->PlayerController);
	}

	static bool ValidateGuidEquality(const SDK::FGuid& first, const SDK::FGuid& second)
	{
		return memcmp(&first, &second, sizeof(SDK::FGuid)) == 0;
	}

	SDK::UWorld* GetWorld()
	{
		try
		{
			auto engine = GetEngine();
			if (!engine)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Engine is null in GetWorld()");
				return nullptr;
			}

			if (!engine->GameViewport)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GameViewport is null - game viewport not initialized");
				return nullptr;
			}

			if (IsBadReadPtr(engine->GameViewport, sizeof(void*)))
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GameViewport pointer is invalid/corrupted");
				return nullptr;
			}

			auto world = engine->GameViewport->World;
			if (!world)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "World is null - world not loaded");
				return nullptr;
			}

			if (IsBadReadPtr(world, sizeof(void*)))
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "World pointer is invalid/corrupted");
				return nullptr;
			}

			return world;
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception occurred while getting World");
			return nullptr;
		}
	}

	uintptr_t GetBaseAddress()
	{
		return (uintptr_t)GetModuleHandle(0);
	}

	uintptr_t GetAddress(uintptr_t Offset)
	{
		return GetBaseAddress() + Offset;
	}

	MH_STATUS CreateHook(uintptr_t pTarget, LPVOID pDetour, LPVOID* ppOriginal = nullptr)
	{
		MH_CreateHook((LPVOID)pTarget, pDetour, ppOriginal);
		return MH_EnableHook((LPVOID)pTarget);
	}

	void VirtualHook(void* Object, int Index, void* Detour, void** OG = nullptr)
	{
		auto vft = *(void***)Object;
		if (!vft || !vft[Index])
		{
			return;
		}

		if (OG)
			*OG = vft[Index];

		DWORD oldProtection;

		VirtualProtect(&vft[Index], sizeof(void*), PAGE_EXECUTE_READWRITE, &oldProtection);
		vft[Index] = Detour;
		VirtualProtect(&vft[Index], 8, oldProtection, NULL);
	}
}