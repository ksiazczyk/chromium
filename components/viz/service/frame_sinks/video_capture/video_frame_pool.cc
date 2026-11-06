// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Video frame pool base class implementation
// summary: Implements the VideoFramePool base class constructor and utilization reporting shared by the video capture frame pool implementations.
// ---

#include "components/viz/service/frame_sinks/video_capture/video_frame_pool.h"

#include <algorithm>
#include <memory>

namespace viz {

VideoFramePool::VideoFramePool(int capacity)
    : capacity_(std::max(0, capacity)) {
  CHECK_GT(capacity_, 0u);
}

VideoFramePool::~VideoFramePool() = default;

float VideoFramePool::GetUtilization() const {
  return static_cast<float>(GetNumberOfReservedFrames()) / capacity_;
}

}  // namespace viz
