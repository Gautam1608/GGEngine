#pragma once

#ifdef GG_PLATFORM_WINDOWS
	#ifdef GG_BUILD_DLL
		#define GG_API __declspec(dllexport)
	#else
		#define GG_API __declspec(dllexport)
	#endif
#else
	#error GGENGINE only supports Windows
#endif
