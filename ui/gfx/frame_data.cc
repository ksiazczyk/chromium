// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Frame data implementation
// summary: Implements constructors and move assignment for the FrameData structure used with buffer swap operations.
// ---

#include "ui/gfx/frame_data.h"

namespace gfx {

FrameData::FrameData(int64_t seq) : seq(seq) {}

FrameData::~FrameData() = default;

FrameData::FrameData(FrameData&&) = default;

FrameData& FrameData::operator=(FrameData&&) = default;

}  // namespace gfx
