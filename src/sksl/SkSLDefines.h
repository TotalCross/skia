/*
 * Copyright 2019 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef SKSL_DEFINES
#define SKSL_DEFINES

#include <cstdint>

#include "include/core/SkTypes.h"

#if defined(SK_BUILD_FOR_IOS) && \
        (!defined(__IPHONE_9_0) || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_9_0)
#define SKSL_USE_THREAD_LOCAL 0
#else
#define SKSL_USE_THREAD_LOCAL 1
#endif

using SKSL_INT = int64_t;
using SKSL_FLOAT = float;

namespace SkSL {
// Functions larger than this (measured in IR nodes) will not be inlined. This growth factor
// accounts for the number of calls being inlined--i.e., a function called five times (that is, with
// five inlining opportunities) would be considered 5x larger than if it were called once. This
// default threshold value is arbitrary, but tends to work well in practice.
static constexpr int kDefaultInlineThreshold = 50;
}

#endif
