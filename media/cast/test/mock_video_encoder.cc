// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockVideoEncoder implementation
// summary: Implements the constructor and destructor of the MockVideoEncoder gmock test double for the Cast VideoEncoder interface.
// ---

#include "media/cast/test/mock_video_encoder.h"

#include "testing/gmock/include/gmock/gmock.h"

namespace media::cast {

MockVideoEncoder::MockVideoEncoder() = default;
MockVideoEncoder::~MockVideoEncoder() = default;

}  // namespace media::cast
