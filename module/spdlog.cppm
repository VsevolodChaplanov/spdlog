module;

#ifndef SPDLOG_IMPORT_STD
    #include <atomic>
    #include <utility>
    #include <chrono>
    #include <cstdio>
    #include <exception>
    #include <functional>
    #include <initializer_list>
    #include <memory>
    #include <string>
    #include <type_traits>
    #include <mutex>
    #include <cassert>
    #include <thread>
    #include <cstring>
    #include <vector>
    #include <algorithm>
    #include <array>
    #include <cctype>
    #include <ctime>
    #include <iterator>
    #include <map>
    #include <unordered_map>
    #include <condition_variable>
#endif

// TODO tmp - check for required headers

#ifdef __linux__
    #include <sys/stat.h>
    #include <sys/types.h>
#endif

#define SPDLOG_MODULE

#define SPDLOG_EXPORT export
#define SPDLOG_EXPORT_BEGIN export {
#define SPDLOG_EXPORT_END }

export module spdlog;

import fmt;

#ifdef SPDLOG_IMPORT_STD
import std;
#endif

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
extern "C++" {
#endif

/*
    includes
*/

#include "spdlog/async.h"
#include "spdlog/async_logger.h"
#include "spdlog/common.h"
#include "spdlog/formatter.h"
#include "spdlog/fwd.h"
#include "spdlog/logger.h"
#include "spdlog/pattern_formatter.h"
#include "spdlog/mdc.h"
#include "spdlog/spdlog.h"
#include "spdlog/stopwatch.h"
#include "spdlog/tweakme.h"
#include "spdlog/version.h"

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
}
#endif

module :private;

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
extern "C++" {
#endif

/*
srcs
*/

#if __has_include("async.cpp")
    #include "async.cpp"
#endif

#if __has_include("cfg.cpp")
    #include "cfg.cpp"
#endif

#if __has_include("color_sinks.cpp")
    #include "color_sinks.cpp"
#endif

#if __has_include("file_sinks.cpp")
    #include "file_sinks.cpp"
#endif

#if __has_include("spdlog.cpp")
    #include "spdlog.cpp"
#endif

#if __has_include("stdout_sinks.cpp")
    #include "stdout_sinks.cpp"
#endif

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
}
#endif
