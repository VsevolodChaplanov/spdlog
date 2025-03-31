module;

// TODO: tmp
#define SPDLOG_ATTACH_TO_GLOBAL_MODULE

#define SPDLOG_MODULE

#define SPDLOG_EXPORT export
#define SPDLOG_EXPORT_BEGIN export {
#define SPDLOG_EXPORT_END }

export module spdlog;

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
#include "spdlog/mdc.h"
#include "spdlog/pattern_formatter.h"
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

#include "async.cpp"
#include "cfg.cpp"
#include "color_sinks.cpp"
#include "file_sinks.cpp"
#include "spdlog.cpp"
#include "stdout_sinks.cpp"

#ifdef SPDLOG_ATTACH_TO_GLOBAL_MODULE
}
#endif
