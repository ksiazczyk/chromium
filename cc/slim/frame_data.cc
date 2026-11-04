// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FrameData implementation
// summary: Implements the FrameData constructor and destructor that wrap a compositor frame and its hit test regions.
// ---

#include "cc/slim/frame_data.h"

namespace cc::slim {

FrameData::FrameData(viz::CompositorFrame& frame,
                     std::vector<viz::HitTestRegion>& regions)
    : frame(frame), hit_test_regions(regions) {}

FrameData::~FrameData() = default;

}  // namespace cc::slim
