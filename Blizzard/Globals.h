#pragma once
#include <cstdint>
#include <Windows.h>
#include "Logging.h"
#include "MinHook/include/MinHook.h"
#include "SDK.hpp"

namespace Globals
{
    bool bBeaconInitialized = false;
    bool bInitializeAsSTW = false;

    SDK::UFortEngine* GetEngine()
    {
        auto Engine = SDK::UObject::FindObject<SDK::UFortEngine>("FortEngine Transient.FortEngine_0");

        return Engine;
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
        return GetEngine()->GameViewport->World;
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