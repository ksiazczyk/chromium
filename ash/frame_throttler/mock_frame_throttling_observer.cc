// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockFrameThrottlingObserver implementation
// summary: Implements the constructor and destructor of the gmock mock for the frame throttling observer.
// relations:
//   - implements /ash/frame_throttler/mock_frame_throttling_observer.h
// ---

#include "ash/frame_throttler/mock_frame_throttling_observer.h"

namespace ash {

MockFrameThrottlingObserver::MockFrameThrottlingObserver() = default;

MockFrameThrottlingObserver::~MockFrameThrottlingObserver() = default;

}  // namespace ash
