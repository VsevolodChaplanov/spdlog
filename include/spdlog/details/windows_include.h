#pragma once

#ifndef NOMINMAX
    #define NOMINMAX  // prevent windows redefining min/max
#endif

#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN
#endif

#ifndef SPDLOG_MODULE
    #include <windows.h>
#endif