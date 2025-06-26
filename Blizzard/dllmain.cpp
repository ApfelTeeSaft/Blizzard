// dllmain.cpp : Defines the entry point for the DLL application.
#include "Logging.h"
#include "Types.h"
#include "Actor.h"
#include "ProcessEvent.h"
#include "World.h"
#include "STW.h"

DWORD WINAPI Main(LPVOID)
{
    Logging::Initialize();
    Types::Initialize();

    std::wstring cmdStr = GetCommandLineW();

    Logging::Log(ELogEvent::Info, ELogType::Game, "Command Line: ", cmdStr);

    Globals::bInitializeAsSTW = (cmdStr.find(L"-stw") != std::wstring::npos || cmdStr.find(L"-STW") != std::wstring::npos);

    std::wstring mapName = L"Zone_Onboarding_FarmsteadFort"; // default
    size_t pos = cmdStr.find(L"-mapname=");
    if (pos == std::wstring::npos)
        pos = cmdStr.find(L"-MapName=");

    if (pos != std::wstring::npos)
    {
        size_t start = pos + wcslen(L"-mapname=");
        size_t end = cmdStr.find(L' ', start);
        mapName = cmdStr.substr(start, end - start);
        Logging::Log(ELogEvent::Info, ELogType::Game, "Parsed Map Name: ", mapName);
    }

    if (Globals::bInitializeAsSTW)
    {
        Logging::Log(ELogEvent::Info, ELogType::Game, "Globals::bInitializeAsSTW: true");
        STWNamespace::Initialize(SDK::FString(mapName.c_str()));
    }
    else
    {
        Logging::Log(ELogEvent::Info, ELogType::Game, "Globals::bInitializeAsSTW: false");
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Initializing Battle Royale...");
        World::Initialize();
        ActorNamespace::Initialize();
        ProcessEventNamespace::Initialize();
    }

    return 0;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        CreateThread(0, 0, Main, hModule, 0, 0);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

