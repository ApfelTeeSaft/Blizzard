#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <filesystem>
#include <iostream>
#include <io.h>
#include <fcntl.h>

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
    Bot = 11,
    GameOutput = 12,
    STW
};

enum ELogEvent : uint8_t
{
    Warning = 1,
    Info = 2,
    Error = 3,
    GameOut = 4
};

namespace Logging
{
    static std::streambuf* originalCoutBuf = nullptr;
    static std::streambuf* originalCerrBuf = nullptr;
    static std::ofstream logFileStream;
    static bool isRedirecting = false;

    class TeeBuf : public std::streambuf {
    private:
        std::streambuf* sb1;
        std::streambuf* sb2;
        std::string prefix;

    public:
        TeeBuf(std::streambuf* sb1, std::streambuf* sb2, const std::string& prefix = "")
            : sb1(sb1), sb2(sb2), prefix(prefix) {
        }

    protected:
        virtual int overflow(int c) override {
            if (c == EOF) {
                return !EOF;
            }
            else {
                int const r1 = sb1->sputc(c);
                int const r2 = sb2->sputc(c);
                return (r1 == EOF || r2 == EOF) ? EOF : c;
            }
        }

        virtual int sync() override {
            int const r1 = sb1->pubsync();
            int const r2 = sb2->pubsync();
            return (r1 == 0 && r2 == 0) ? 0 : -1;
        }
    };

    static TeeBuf* coutTeeBuf = nullptr;
    static TeeBuf* cerrTeeBuf = nullptr;

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
        case ELogType::GameOutput: return "GameOutput";
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
        case ELogEvent::GameOut: return "Game";
        default: return "Unknown";
        }
    }

    void WriteToLogFile(const std::string& message)
    {
        try
        {
            if (logFileStream.is_open())
            {
                logFileStream << message;
                logFileStream.flush();
            }
        }
        catch (const std::exception&)
        {
        }
    }

    void SetupOutputRedirection()
    {
        try
        {
            if (!isRedirecting && logFileStream.is_open())
            {
                originalCoutBuf = std::cout.rdbuf();
                originalCerrBuf = std::cerr.rdbuf();

                coutTeeBuf = new TeeBuf(originalCoutBuf, logFileStream.rdbuf(), "FortniteOutput: Game: ");
                cerrTeeBuf = new TeeBuf(originalCerrBuf, logFileStream.rdbuf(), "FortniteOutput: Error: ");

                std::cout.rdbuf(coutTeeBuf);
                std::cerr.rdbuf(cerrTeeBuf);

                isRedirecting = true;
            }
        }
        catch (...)
        {
        }
    }

    void RestoreOutputRedirection()
    {
        try
        {
            if (isRedirecting)
            {
                if (originalCoutBuf)
                    std::cout.rdbuf(originalCoutBuf);
                if (originalCerrBuf)
                    std::cerr.rdbuf(originalCerrBuf);

                if (coutTeeBuf) {
                    delete coutTeeBuf;
                    coutTeeBuf = nullptr;
                }
                if (cerrTeeBuf) {
                    delete cerrTeeBuf;
                    cerrTeeBuf = nullptr;
                }

                isRedirecting = false;
            }
        }
        catch (...)
        {
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

        WriteToLogFile(FullMessage);
    }

    void SafeLog(const std::string& message)
    {
        try
        {
            printf("%s", message.c_str());
            fflush(stdout);

            if (logFileStream.is_open())
            {
                logFileStream << message;
                logFileStream.flush();
            }
        }
        catch (...)
        {
        }
    }

    void SafeLog(ELogEvent LogEvent, ELogType LogType, const char* Format, ...)
    {
        try
        {
            std::string Prefix = LogTypeToString(LogType) + ": " + LogEventToString(LogEvent) + ": ";
            char Buffer[1024];
            va_list _ArgList;
            va_start(_ArgList, Format);
            vsnprintf(Buffer, sizeof(Buffer), Format, _ArgList);
            va_end(_ArgList);

            std::string FullMessage = Prefix + Buffer + "\n";
            SafeLog(FullMessage);
        }
        catch (...)
        {
        }
    }

    void Initialize()
    {
        AllocConsole();
        FILE* File;
        freopen_s(&File, "CONOUT$", "w+", stdout);
        freopen_s(&File, "CONOUT$", "w+", stderr);
        SetConsoleTitleA("Blizzard - 2.5.0");

        try
        {
            if (std::filesystem::exists("Athena.log"))
                std::filesystem::remove("Athena.log");

            logFileStream.open("Athena.log", std::ios::app);
            if (logFileStream.is_open())
            {
                logFileStream << "=== Log Started ===\n";
                logFileStream.flush();

                SetupOutputRedirection();
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
        Logging::Log(ELogEvent::Info, ELogType::Athena, "Output redirection enabled - game output will be captured");
    }

    void Cleanup()
    {
        try
        {
            RestoreOutputRedirection();

            if (logFileStream.is_open())
            {
                logFileStream << "=== Log Ended ===\n";
                logFileStream.flush();
                logFileStream.close();
            }
        }
        catch (...)
        {
        }
    }
}