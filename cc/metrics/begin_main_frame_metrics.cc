// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BeginMainFrameMetrics implementation
// summary: Provides default constructor, copy constructor, and assignment operator definitions for the BeginMainFrameMetrics class.
// ---

#include "cc/metrics/begin_main_frame_metrics.h"

namespace cc {

BeginMainFrameMetrics::BeginMainFrameMetrics() = default;

BeginMainFrameMetrics::BeginMainFrameMetrics(
    const BeginMainFrameMetrics& other) = default;

BeginMainFrameMetrics& BeginMainFrameMetrics::operator=(
    const BeginMainFrameMetrics& other) = default;

}  // namespace cc
