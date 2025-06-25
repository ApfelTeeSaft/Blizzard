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
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "VirtualProtect failed: %lu", GetLastError());
            return false;
        }

        __try
        {
            memcpy(address, data, size);
        }
        __except (EXCEPTION_EXECUTE_HANDLER)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Memory write exception occurred");
            VirtualProtect(address, size, oldProtect, &oldProtect);
            return false;
        }

        VirtualProtect(address, size, oldProtect, &oldProtect);
        return true;
    }

    inline bool InitializeGObjects(uintptr_t address)
    {
        try
        {
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Starting GObjects initialization...");
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Attempting to initialize GObjects at 0x%llX", address);

            if (address == 0)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to resolve GObjects address - address is null");
                return false;
            }

            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Address validation check for GObjects...");
            if (!IsValidAddress(address))
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GObjects address 0x%llX is not valid/accessible", address);
                return false;
            }
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "GObjects address validation passed");

            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Performing test read on GObjects address...");
                void* testRead = *reinterpret_cast<void**>(address);
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "GObjects points to: 0x%p", testRead);

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Setting GObjects pointer...");
                void** gobjects_ptr = reinterpret_cast<void**>(&SDK::UObject::GObjects);
                *gobjects_ptr = reinterpret_cast<void*>(address);

                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Successfully initialized GObjects");
                return true;
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception occurred during GObjects pointer assignment at 0x%llX", address);
                return false;
            }
        }
        catch (...)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in InitializeGObjects");
            return false;
        }
    }

    inline bool InitializeFNameToString(uintptr_t address)
    {
        try
        {
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Starting FNameToString initialization...");
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Attempting to initialize FNameToString at 0x%llX", address);

            if (address == 0)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to resolve FNameToString address - address is null");
                return false;
            }

            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Address validation check for FNameToString...");
            if (!IsValidAddress(address))
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "FNameToString address 0x%llX is not valid/accessible", address);
                return false;
            }
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "FNameToString address validation passed");

            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Setting FNameToString function pointer...");
                SDK::FNameToString = reinterpret_cast<decltype(SDK::FNameToString)>(address);
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Successfully initialized FNameToString");
                return true;
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception occurred during FNameToString pointer assignment at 0x%llX", address);
                return false;
            }
        }
        catch (...)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in InitializeFNameToString");
            return false;
        }
    }

    inline bool InitializeFreeInternal(uintptr_t address)
    {
        try
        {
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Starting FreeInternal initialization...");
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Attempting to initialize FreeInternal at 0x%llX", address);

            if (address == 0)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to resolve FreeInternal address - address is null");
                return false;
            }

            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Address validation check for FreeInternal...");
            if (!IsValidAddress(address))
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "FreeInternal address 0x%llX is not valid/accessible", address);
                return false;
            }
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "FreeInternal address validation passed");

            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Setting FreeInternal function pointer...");
                SDK::FreeInternal = reinterpret_cast<decltype(SDK::FreeInternal)>(address);
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Successfully initialized FreeInternal");
                return true;
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception occurred during FreeInternal pointer assignment at 0x%llX", address);
                return false;
            }
        }
        catch (...)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in InitializeFreeInternal");
            return false;
        }
    }

    inline bool Initialize()
    {
        try
        {
            Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== Starting SDK Types Initialization ===");

            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Initializing MinHook...");
                auto mhResult = MH_Initialize();
                if (mhResult != MH_OK)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Hook, "Failed to initialize MinHook: %d", mhResult);
                    return false;
                }
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "MinHook initialized successfully");
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during MinHook initialization");
                return false;
            }

            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Getting game base address...");
                uintptr_t baseAddr = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr));
                if (baseAddr == 0)
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Failed to get game base address");
                    return false;
                }
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Game base address: 0x%llX", baseAddr);

                uintptr_t testAddr = Globals::GetAddress(0x47B8388);
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Test address resolution (GObjects): 0x%llX", testAddr);
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during base address resolution");
                return false;
            }

            bool allSuccess = true;

            // Initialize GObjects
            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "--- Initializing GObjects ---");
                if (!InitializeGObjects(Globals::GetAddress(0x47B8388)))
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "GObjects initialization failed");
                    allSuccess = false;
                }
                else
                {
                    Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "GObjects initialization completed successfully");
                }
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during GObjects initialization");
                allSuccess = false;
            }

            // Initialize FNameToString
            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "--- Initializing FNameToString ---");
                if (!InitializeFNameToString(Globals::GetAddress(0x11FDBA0)))
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "FNameToString initialization failed");
                    allSuccess = false;
                }
                else
                {
                    Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "FNameToString initialization completed successfully");
                }
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during FNameToString initialization");
                allSuccess = false;
            }

            // Initialize FreeInternal
            try
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "--- Initializing FreeInternal ---");
                if (!InitializeFreeInternal(Globals::GetAddress(0x1138AC0)))
                {
                    Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "FreeInternal initialization failed");
                    allSuccess = false;
                }
                else
                {
                    Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "FreeInternal initialization completed successfully");
                }
            }
            catch (...)
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during FreeInternal initialization");
                allSuccess = false;
            }

            if (allSuccess)
            {
                Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== ALL SDK TYPES INITIALIZED SUCCESSFULLY ===");
            }
            else
            {
                Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "=== SDK TYPES INITIALIZATION FAILED - ONE OR MORE COMPONENTS FAILED ===");
            }

            return allSuccess;
        }
        catch (...)
        {
            Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in Types::Initialize");
            return false;
        }
    }
}