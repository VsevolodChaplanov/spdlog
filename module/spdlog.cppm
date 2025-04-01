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

// SPDLOG_EXPORT enum class async_overflow_policy;

#include "spdlog/common.h"

/*
    `details` includes
*/

#include "spdlog/details/log_msg.h"
#include "spdlog/details/log_msg_buffer.h"
#include "spdlog/details/circular_q.h"
#include "spdlog/details/backtracer.h"
#include "spdlog/details/periodic_worker.h"
#include "spdlog/details/registry.h"

#include "spdlog/logger.h"
#include "spdlog/async_logger.h"
#include "spdlog/async.h"

#include "spdlog/details/mpmc_blocking_q.h"
#include "spdlog/details/os.h"
#include "spdlog/details/thread_pool.h"
#include "spdlog/details/synchronous_factory.h"
#include "spdlog/details/null_mutex.h"

#include "spdlog/cfg/helpers.h"
#include "spdlog/cfg/argv.h"
#include "spdlog/cfg/env.h"

#include "spdlog/details/file_helper.h"
#include "spdlog/details/fmt_helper.h"

/*
    `sinks` includes
*/

#include "spdlog/details/console_globals.h"
#include "spdlog/sinks/sink.h"
#include "spdlog/sinks/base_sink.h"
#include "spdlog/sinks/ansicolor_sink.h"
#include "spdlog/sinks/stdout_sinks.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/basic_file_sink.h"
#include "spdlog/sinks/rotating_file_sink.h"

/*
    `public` includes
*/

#include "spdlog/formatter.h"
#include "spdlog/fwd.h"
#include "spdlog/pattern_formatter.h"
#include "spdlog/mdc.h"
#include "spdlog/spdlog.h"
#include "spdlog/stopwatch.h"
#include "spdlog/tweakme.h"
#include "spdlog/version.h"

/*
    `details` includes
*/

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
}
#endif

module :private;

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
extern "C++" {
#endif

/*
    `implementation` includes
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
