#include "Log.h"
#include "spdlog/common.h"
#include "spdlog/spdlog.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace AE
{

SharedLogger Logger::coreLogger;
SharedLogger Logger::clientLogger;

void Logger::Init()
{
  // spdlog::set_pattern("")
  coreLogger = spdlog::stdout_color_mt("ARC");
  coreLogger->set_level(spdlog::level::trace);

  clientLogger = spdlog::stdout_color_mt("APP");
  clientLogger->set_level(spdlog::level::trace);
}

}
