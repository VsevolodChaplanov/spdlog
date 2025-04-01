// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#define SPDLOG_VER_MAJOR 1
#define SPDLOG_VER_MINOR 15
#define SPDLOG_VER_PATCH 2

#define SPDLOG_TO_VERSION(major, minor, patch) (major * 10000 + minor * 100 + patch)
#define SPDLOG_VERSION SPDLOG_TO_VERSION(SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH)

#ifdef SPDLOG_MODULE

// Macro expansion is not supported in modules
// Exporting this variables as contexpr constants

SPDLOG_EXPORT inline constexpr auto spdlog_version_major = SPDLOG_VER_MAJOR;
SPDLOG_EXPORT inline constexpr auto spdlog_version_minor = SPDLOG_VER_MINOR;
SPDLOG_EXPORT inline constexpr auto spdlog_version_patch = SPDLOG_VER_PATCH;

SPDLOG_EXPORT inline constexpr auto spdlog_version = (spdlog_version_major * 10000 + spdlog_version_minor * 100 + spdlog_version_patch);
#endif