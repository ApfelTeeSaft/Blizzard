// dllmain.cpp : Defines the entry point for the DLL application.
#include "framework.h"
#include "Logging.h"
#include "Types.h"
#include "Actor.h"
#include "ProcessEvent.h"

DWORD WINAPI Main(LPVOID)
{
    Logging::Initialize();
    Types::Initialize();
    ActorNamespace::Initialize();
    ProcessEventNamespace::Initialize();
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

