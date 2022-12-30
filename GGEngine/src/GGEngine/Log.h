#pragma once

#include "Core.h"
#include "spdlog\spdlog.h"
#include <memory>

namespace GGENGINE {
	class GG_API Log
	{
	public:
		static void  Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};	
}

#define GG_CORE_TRACE(...)		  ::GGENGINE::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define GG_CORE_INFO(...)         ::GGENGINE::Log::GetCoreLogger()->info(__VA_ARGS__)
#define GG_CORE_WARN(...)         ::GGENGINE::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define GG_CORE_ERROR(...)        ::GGENGINE::Log::GetCoreLogger()->error(__VA_ARGS__)
#define GG_CORE_FATAL(...)        ::GGENGINE::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define GG_CLIENT_TRACE(...)      ::GGENGINE::Log::GetCleintLogger()->trace(__VA_ARGS__)
#define GG_CLIENT_INFO(...)       ::GGENGINE::Log::GetCleintLogger()->info(__VA_ARGS__)
#define GG_CLIENT_WARN(...)       ::GGENGINE::Log::GetCleintLogger()->warn(__VA_ARGS__)
#define GG_CLIENT_ERROR(...)      ::GGENGINE::Log::GetCleintLogger()->error(__VA_ARGS__)
#define GG_CLIENT_FATAL(...)      ::GGENGINE::Log::GetCleintLogger()->fatal(__VA_ARGS__)
#define GG_CLIENT_ERROR(...)      ::GGENGINE::Log::GetCleintLogger()->error(__VA_ARGS__)
