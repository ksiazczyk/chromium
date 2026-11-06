// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Frame timing details implementation
// summary: Provides default constructor, destructor, and copy constructor definitions for the FrameTimingDetails class.
// ---

#include "components/viz/common/frame_timing_details.h"

namespace viz {

FrameTimingDetails::FrameTimingDetails() = default;
FrameTimingDetails::~FrameTimingDetails() = default;
FrameTimingDetails::FrameTimingDetails(const FrameTimingDetails& other) =
    default;

}  // namespace viz
