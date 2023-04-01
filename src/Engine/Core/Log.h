#ifndef LOG_H
#define LOG_H

#include <memory>

#include <spdlog/spdlog.h>

#ifdef DEBUG
  // Logging for core
  #define AE_CORE_INFO(...)       ::AE::Logger::GetCoreLogger()->info(__VA_ARGS__)
  #define AE_CORE_DEBUG(...)      ::AE::Logger::GetCoreLogger()->debug(__VA_ARGS__)
  #define AE_CORE_WARN(...)       ::AE::Logger::GetCoreLogger()->warm(__VA_ARGS__)
  #define AE_CORE_ERROR(...)      ::AE::Logger::GetCoreLogger()->error(__VA_ARGS__)
  #define AE_CORE_CRITICAL(...)   ::AE::Logger::GetCoreLogger()->critical(__VA_ARGS__)

  // Logging for client
  #define AE_CLIENT_INFO(...)       ::AE::Logger::GetClientLogger()->info(__VA_ARGS__)
  #define AE_CLIENT_DEBUG(...)      ::AE::Logger::GetClientLogger()->debug(__VA_ARGS__)
  #define AE_CLIENT_WARN(...)       ::AE::Logger::GetClientLogger()->warm(__VA_ARGS__)
  #define AE_CLIENT_ERROR(...)      ::AE::Logger::GetClientLogger()->error(__VA_ARGS__)
  #define AE_CLIENT_CRITICAL(...)   ::AE::Logger::GetClientLogger()->critical(__VA_ARGS__)
#else
  #define AE_CORE_INFO
  #define AE_CORE_DEBUG
  #define AE_CORE_WARN
  #define AE_CORE_ERROR
  #define AE_CORE_CRITICAL

  #define AE_CLIENT_INFO
  #define AE_CLIENT_DEBUG
  #define AE_CLIENT_WARN
  #define AE_CLIENT_ERROR
  #define AE_CLIENT_CRITICAL
#endif

namespace AE
{

typedef std::shared_ptr<spdlog::logger> SharedLogger;

class Logger
{
private:
  static SharedLogger coreLogger;
  static SharedLogger clientLogger;
  
public:
  static void Init();

  inline static SharedLogger& GetCoreLogger() {return coreLogger;}
  inline static SharedLogger& GetClientLogger() {return clientLogger;}
};

}
#endif
