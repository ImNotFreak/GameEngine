#include "Engine.h"
#include "Log/Log.h"
#include <format>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

using namespace LifeExe;

Engine::Engine() 
{
    Log::getInstance().log(LifeExe::LogVerbosity::Display, 
        std::format("INIT ENGIENE, VERSION {}", version()));

    Log::getInstance().log(LifeExe::LogVerbosity::Error, std::format("ERROR EXAMPLE {}", version()));
    Log::getInstance().log(LifeExe::LogVerbosity::Fatal, std::format("FATAL EXAMPLE {}", version()));
    Log::getInstance().log(LifeExe::LogVerbosity::Warning, std::format("WARNING EXAMPLE, {}", version()));
    Log::getInstance().log(LifeExe::LogVerbosity::NoLogging, std::format("NO LOG, {}", version()));
}
