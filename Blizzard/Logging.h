#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <filesystem>
#include <iostream>

enum ELogType : uint8_t
{
    Invalid = 0,
    Abilities = 1,
    Actor = 2,
    Player = 3,
    Game = 4,
    Inventory = 5,
    Kismet = 6,
    Hook = 7,
    Athena = 8,
    ProcessEvent = 9,
    Quests = 10,
    Bot = 11
};

enum ELogEvent : uint8_t
{
    Warning = 1,
    Info = 2,
    Error = 3
};

namespace Logging
{

    std::string LogTypeToString(ELogType LogType = ELogType::Invalid)
    {
        switch (LogType)
        {
        case ELogType::Abilities: return "LogAbilities";
        case ELogType::Actor: return "LogActor";
        case ELogType::Player: return "LogPlayer";
        case ELogType::Game: return "LogGame";
        case ELogType::Inventory: return "LogInventory";
        case ELogType::Kismet: return "LogKismet";
        case ELogType::Hook: return "LogHook";
        case ELogType::Athena: return "LogAthena";
        case ELogType::ProcessEvent: return "LogProcessEvent";
        case ELogType::Quests: return "LogQuests";
        case ELogType::Bot: return "LogAI";
        default: return "Log";
        }
    }

    std::string LogEventToString(ELogEvent LogEvent)
    {
        switch (LogEvent)
        {
        case ELogEvent::Warning: return "Warning";
        case ELogEvent::Info: return "Info";
        case ELogEvent::Error: return "Error";
        default: return "Unknown";
        }
    }

    void Log(ELogEvent LogEvent, ELogType LogType, const char* Format, ...)
    {
        std::string Prefix = LogTypeToString(LogType) + ": " + LogEventToString(LogEvent) + ": ";
        char Buffer[1024];
        va_list _ArgList;
        va_start(_ArgList, Format);
        vsnprintf(Buffer, sizeof(Buffer), Format, _ArgList);
        va_end(_ArgList);

        std::string FullMessage = Prefix + Buffer + "\n";

        printf("%s", FullMessage.c_str());
        fflush(stdout);

        try
        {
            std::ofstream logFile("Athena.log", std::ios::app);
            if (logFile.is_open())
            {
                logFile << FullMessage;
                logFile.flush();
                logFile.close();
            }
            else
            {
                std::string currentPath = std::filesystem::current_path().string();
                std::string fullPath = currentPath + "\\Athena.log";
                std::ofstream logFileAbs(fullPath, std::ios::app);
                if (logFileAbs.is_open())
                {
                    logFileAbs << FullMessage;
                    logFileAbs.flush();
                    logFileAbs.close();
                }
                else
                {
                    printf("ERROR: Could not open log file! Current dir: %s\n", currentPath.c_str());
                }
            }
        }
        catch (const std::exception& e)
        {
            printf("ERROR: Exception while logging: %s\n", e.what());
        }
    }

    void Initialize()
    {
        AllocConsole();
        FILE* File;
        freopen_s(&File, "CONOUT$", "w+", stdout);
        SetConsoleTitleA("Blizzard - 2.5.0");

        try
        {
            if (std::filesystem::exists("Athena.log"))
                std::filesystem::remove("Athena.log");

            std::ofstream testFile("Athena.log", std::ios::app);
            if (testFile.is_open())
            {
                testFile << "=== Log Started ===\n";
                testFile.close();
            }
            else
            {
                printf("WARNING: Could not create log file!\n");
            }
        }
        catch (const std::exception& e)
        {
            printf("ERROR: Exception during log initialization: %s\n", e.what());
        }

        Logging::Log(ELogEvent::Info, ELogType::Athena, "Pieced together by @ApfelTeeSaft");
    }
}