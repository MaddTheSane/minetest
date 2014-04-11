/*
	If CMake is used, includes the cmake-generated cmake_config.h.
	Otherwise use default values
*/

#ifndef CONFIG_H
#define CONFIG_H

#define PROJECT_NAME "Minetest"
#define RUN_IN_PLACE 0
#define USE_GETTEXT 0
#ifndef USE_SOUND
	#define USE_SOUND 0
#endif

#ifndef USE_CURL
	#define USE_CURL 0
#endif

#define USE_FREETYPE 0
#define STATIC_SHAREDIR ""

#ifndef USE_LEVELDB
	#define USE_LEVELDB 0
#endif
#ifdef __APPLE__
#undef USE_SOUND
#undef USE_FREETYPE
#undef USE_CURL
#define USE_SOUND 1
#define USE_FREETYPE 1
#define USE_CURL 1

#define VERSION_MAJOR 0
#define VERSION_MINOR 4
#define VERSION_PATCH_ORIG 9

#endif

#ifndef USE_LUAJIT
	#define USE_LUAJIT 0
#endif

#ifdef USE_CMAKE_CONFIG_H
	#include "cmake_config.h"
	#undef PROJECT_NAME
	#define PROJECT_NAME CMAKE_PROJECT_NAME
	#undef RUN_IN_PLACE
	#define RUN_IN_PLACE CMAKE_RUN_IN_PLACE
	#undef USE_GETTEXT
	#define USE_GETTEXT CMAKE_USE_GETTEXT
	#undef USE_SOUND
	#define USE_SOUND CMAKE_USE_SOUND
	#undef USE_CURL
	#define USE_CURL CMAKE_USE_CURL
	#undef USE_FREETYPE
	#define USE_FREETYPE CMAKE_USE_FREETYPE
	#undef STATIC_SHAREDIR
	#define STATIC_SHAREDIR CMAKE_STATIC_SHAREDIR
	#undef USE_LEVELDB
	#define USE_LEVELDB CMAKE_USE_LEVELDB
	#undef USE_LUAJIT
	#define USE_LUAJIT CMAKE_USE_LUAJIT
	#undef VERSION_MAJOR
	#define VERSION_MAJOR CMAKE_VERSION_MAJOR
	#undef VERSION_MINOR
	#define VERSION_MINOR CMAKE_VERSION_MINOR
	#undef VERSION_PATCH
	#define VERSION_PATCH CMAKE_VERSION_PATCH
	#undef VERSION_PATCH_ORIG
	#define VERSION_PATCH_ORIG CMAKE_VERSION_PATCH_ORIG
	#undef VERSION_STRING
	#define VERSION_STRING CMAKE_VERSION_STRING
	#undef PRODUCT_VERSION_STRING
	#define PRODUCT_VERSION_STRING CMAKE_PRODUCT_VERSION_STRING
	#undef VERSION_EXTRA_STRING
	#define VERSION_EXTRA_STRING CMAKE_VERSION_EXTRA_STRING
#endif

#endif

