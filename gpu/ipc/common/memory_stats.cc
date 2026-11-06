// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Video memory usage stats implementation
// summary: Implements constructors and destructors for VideoMemoryUsageStats and its per-process ProcessStats struct.
// ---

#include "gpu/ipc/common/memory_stats.h"

namespace gpu {

VideoMemoryUsageStats::VideoMemoryUsageStats()
    : bytes_allocated(0) {}

VideoMemoryUsageStats::VideoMemoryUsageStats(
    const VideoMemoryUsageStats& other) = default;

VideoMemoryUsageStats::~VideoMemoryUsageStats() = default;

VideoMemoryUsageStats::ProcessStats::ProcessStats()
    : video_memory(0), has_duplicates(false) {}

VideoMemoryUsageStats::ProcessStats::~ProcessStats() = default;

}  // namespace gpu
