#include "Engine.h"
#include "Log/Log.h"
#include <format>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

using namespace LifeExe;
DEFINE_LOG_CATEGORY_STATIC(LogEngine)
Engine::Engine() 
{
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Display, 
        std::format("INIT ENGIENE, VERSION {}", version()));

    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Error, "ERROR EXAMPLE");
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Warning, "WARNING EXAMPLE");
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::NoLogging, "NO LOG");
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Log, "FILE LOG EXAMPLE");
    //Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Fatal, std::format("FATAL EXAMPLE {}", version()));
}
