#pragma once
#include "SDK.hpp"
#include "Globals.h"
#include "FN_Basic.hpp"
#include <Windows.h>

namespace Types
{
    inline bool IsValidAddress(uintptr_t address)
    {
        if (address == 0) return false;

        MEMORY_BASIC_INFORMATION mbi;
        if (VirtualQuery(reinterpret_cast<LPCVOID>(address), &mbi, sizeof(mbi)) == 0)
            return false;

        return (mbi.State == MEM_COMMIT) &&
            (mbi.Protect & (PAGE_READWRITE | PAGE_EXECUTE_READWRITE | PAGE_READONLY));
    }

    inline bool SafeWriteMemory(void* address, void* data, size_t size)
    {
        if (!address || !data) return false;

        DWORD oldProtect;
        if (!VirtualProtect(address, size, PAGE_EXECUTE_READWRITE, &oldProtect))
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "VirtualProtect failed: %lu", GetLastError());
            return false;
        }

        __try
        {
            memcpy(address, data, size);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Memory write exception occurred");
            VirtualProtect(address, size, oldProtect, &oldProtect);
            return false;
        }

        VirtualProtect(address, size, oldProtect, &oldProtect);
        return true;
    }

    inline bool InitializeGObjects(uintptr_t address)
    {
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Attempting to initialize GObjects at 0x%llX", address);

        if (address == 0)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Failed to resolve GObjects address - address is null");
            return false;
        }

        if (!IsValidAddress(address))
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "GObjects address 0x%llX is not valid/accessible", address);
            return false;
        }

        __try
        {
            void* testRead = *reinterpret_cast<void**>(address);
            Logging::Log(ELogEvent::Info, ELogType::Athena, "GObjects points to: 0x%p", testRead);

            void** gobjects_ptr = reinterpret_cast<void**>(&SDK::UObject::GObjects);
            *gobjects_ptr = reinterpret_cast<void*>(address);

            Logging::Log(ELogEvent::Info, ELogType::Athena, "Successfully initialized GObjects");
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Exception occurred while initializing GObjects at 0x%llX", address);
            return false;
        }
    }

    inline bool InitializeFNameToString(uintptr_t address)
    {
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Attempting to initialize FNameToString at 0x%llX", address);

        if (address == 0)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Failed to resolve FNameToString address - address is null");
            return false;
        }

        if (!IsValidAddress(address))
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "FNameToString address 0x%llX is not valid/accessible", address);
            return false;
        }

        __try
        {
            SDK::FNameToString = reinterpret_cast<decltype(SDK::FNameToString)>(address);
            Logging::Log(ELogEvent::Info, ELogType::Athena, "Successfully initialized FNameToString");
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Exception occurred while initializing FNameToString at 0x%llX", address);
            return false;
        }
    }

    inline bool InitializeFreeInternal(uintptr_t address)
    {
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Attempting to initialize FreeInternal at 0x%llX", address);

        if (address == 0)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Failed to resolve FreeInternal address - address is null");
            return false;
        }

        if (!IsValidAddress(address))
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "FreeInternal address 0x%llX is not valid/accessible", address);
            return false;
        }

        __try
        {
            SDK::FreeInternal = reinterpret_cast<decltype(SDK::FreeInternal)>(address);
            Logging::Log(ELogEvent::Info, ELogType::Athena, "Successfully initialized FreeInternal");
            return true;
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "Exception occurred while initializing FreeInternal at 0x%llX", address);
            return false;
        }
    }

    inline bool Initialize()
    {
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Starting SDK types initialization...");

        if (MH_Initialize() != MH_OK) {
            Logging::Log(ELogEvent::Error, ELogType::Hook, "Failed to initialize MinHook");
            return 1;
        }

        uintptr_t baseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Game base address: 0x%llX", baseAddr);

        bool success = true;

        uintptr_t testAddr = Globals::GetAddress(0x47B8388);
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Test address resolution: 0x%llX", testAddr);

        if (!InitializeGObjects(Globals::GetAddress(0x47B8388)))
        {
            success = false;
        }

        if (!InitializeFNameToString(Globals::GetAddress(0x11FDBA0)))
        {
            success = false;
        }

        if (!InitializeFreeInternal(Globals::GetAddress(0x1138AC0)))
        {
            success = false;
        }

        if (success)
        {
            Logging::Log(ELogEvent::Info, ELogType::Athena, "All SDK types initialized successfully");
        }
        else
        {
            Logging::Log(ELogEvent::Error, ELogType::Athena, "One or more SDK types failed to initialize");
        }

        return success;
    }
}