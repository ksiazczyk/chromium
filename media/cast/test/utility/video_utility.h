// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Video frame population utility declarations
// summary: Declares utility functions to populate video frames with a plaid pattern or noise for video testing.
// ---

#ifndef MEDIA_CAST_TEST_UTILITY_VIDEO_UTILITY_H_
#define MEDIA_CAST_TEST_UTILITY_VIDEO_UTILITY_H_

// Utility functions for video testing.

#include "media/base/video_frame.h"

namespace media::cast {

// Populate a video |frame| with a plaid pattern, cycling from the given
// |start_value|.
// Width, height and stride should be set in advance.
// Memory is allocated within the function.
void PopulateVideoFrame(VideoFrame* frame, int start_value);

// Populate a video frame with noise.
void PopulateVideoFrameWithNoise(VideoFrame* frame);

}  // namespace media::cast

#endif  // MEDIA_CAST_TEST_UTILITY_VIDEO_UTILITY_H_
