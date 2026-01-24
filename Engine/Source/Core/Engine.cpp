#include "Engine.h"
#include "Log/Log.h"
#include <format>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

using namespace LifeExe;
DEFINE_LOG_CATEGORY_STATIC(LogEngine)
Engine::Engine()
{
    /*Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Display,
        std::format("INIT ENGIENE, VERSION {}", version()));*/

    /*Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Error, "ERROR EXAMPLE", true);
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Warning, "WARNING EXAMPLE");
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::NoLogging, "NO LOG");
    Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Log, "FILE LOG EXAMPLE", true);*/
    // Log::getInstance().log(LogEngine, LifeExe::LogVerbosity::Fatal, std::format("FATAL EXAMPLE {}", version()));
    LE_LOG_DEBUG(LogEngine, Display, "INIT ENGIENE, VERSION {}", version());
    LE_LOG_DEBUG(LogEngine, Error, "ERROR EXAMPLE");
    LE_LOG(LogEngine, Warning, "WARNING EXAMPLE");
    LE_LOG(LogEngine, Log, "LOG");
    // LE_LOG(LogEngine, Fatal, "FATAL EXAMPLE");
}
