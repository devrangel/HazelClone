#pragma once

#ifdef HZC_PLATFORM_WINDOWS
	#ifdef HZC_BUILD_DLL
		#define HAZELCLONE_API __declspec(dllexport)
	#else
		#define HAZELCLONE_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Hazel Clone only supports Windows
#endif // HZC_PLATFORM_WINDOWS
