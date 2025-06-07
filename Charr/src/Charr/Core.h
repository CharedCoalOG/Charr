#pragma once

#ifdef CR_PLATFORM_WINDOWS
	#ifdef CR_BUILD_DLL
		#define CHARR_API __declspec(dllexport)
	#else
		#define CHARR_API __declspec(dllimport)
	#endif
#else
	#error Charr only supports Windows!
#endif