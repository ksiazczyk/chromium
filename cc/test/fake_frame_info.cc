// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CreateFakeFrameInfo helper implementation
// summary: Implements a helper that creates a FrameInfo instance with a requested final state and both smooth threads for metrics tests.
// ---

#include "cc/test/fake_frame_info.h"

namespace cc {

FrameInfo CreateFakeFrameInfo(FrameInfo::FrameFinalState state) {
  FrameInfo info;
  info.final_state = state;
  info.smooth_thread = FrameInfo::SmoothThread::kSmoothBoth;
  return info;
}

}  // namespace cc
