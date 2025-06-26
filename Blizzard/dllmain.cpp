// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
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
    SDK::FString cmd = GetCommandLineW();
    auto pos = cmd.ToString();

    Logging::Log(ELogEvent::Info, ELogType::Game, "Command Line: ", pos);
    if (pos.find("-stw") != std::string::npos || pos.find("-STW") != std::string::npos)
    {
        Globals::bInitializeAsSTW = true;
        Logging::Log(ELogEvent::Info, ELogType::Game, "Globals::bInitializeAsSTW: ", Globals::bInitializeAsSTW ? "true" : "false");
        STWNamespace::Initialize();
    }
    else
    {
        Logging::Log(ELogEvent::Info, ELogType::Game, "Globals::bInitializeAsSTW: ", Globals::bInitializeAsSTW ? "true" : "false");
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

