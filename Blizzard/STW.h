#include "Globals.h"
#include "Logging.h"
#include "Replication.h"
#include <Windows.h>

namespace STWNamespace
{
    void Initialize(const SDK::FString& GameMap)
    {
        Logging::Log(ELogEvent::Info, ELogType::STW, "Initializing STW...");

        Replication::InitOffsets();

        auto* controller = Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController;
        if (controller)
        {
            controller->SwitchLevel(GameMap);
        }
        else
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::STW, "PlayerController is null. Cannot switch level.");
            return;
        }

        Logging::SafeLog(ELogEvent::Info, ELogType::STW, "=== Starting World Initialization ===");

        const uintptr_t gIsClientAddr = Globals::GetAddress(0x46AD734);
        DWORD oldProtect;
        if (VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), PAGE_READWRITE, &oldProtect))
        {
            *(bool*)gIsClientAddr = false;
            VirtualProtect((LPVOID)gIsClientAddr, sizeof(bool), oldProtect, &oldProtect);
            Logging::SafeLog(ELogEvent::Info, ELogType::STW, "GIsClient set to false successfully.");
        }
        else
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::STW, "Failed to change memory protection for GIsClient.");
        }

        // Null out unneeded functions (STW-specific assumptions)
        Logging::SafeLog(ELogEvent::Info, ELogType::STW, "Nulling out functions...");

        std::vector<uintptr_t> functionsToNull = {
            0xB6C9E0,
            0xE2FA50
        };

        for (const auto& funcOffset : functionsToNull)
        {
            uintptr_t funcAddr = Globals::GetAddress(funcOffset);
            DWORD protect;
            if (VirtualProtect((LPVOID)funcAddr, 1, PAGE_EXECUTE_READWRITE, &protect))
            {
                *(uint8_t*)funcAddr = 0xC3;
                DWORD temp;
                VirtualProtect((LPVOID)funcAddr, 1, protect, &temp);
                Logging::SafeLog(ELogEvent::Info, ELogType::STW, "Nulled function at 0x%llX", funcAddr);
            }
            else
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::STW, "Failed to null function at 0x%llX", funcAddr);
            }
        }

        Logging::SafeLog(ELogEvent::Info, ELogType::STW, "=== World Initialization Completed ===");
    }
}
