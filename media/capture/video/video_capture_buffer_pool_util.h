// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Video capture buffer pool size utility header
// summary: Declares the default maximum video capture buffer pool size constant and the DeviceVideoCaptureMaxBufferPoolSize function.
// ---

#ifndef MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_POOL_UTIL_H_
#define MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_POOL_UTIL_H_

#include "media/capture/capture_export.h"

namespace media {

constexpr int kVideoCaptureDefaultMaxBufferPoolSize = 4;
CAPTURE_EXPORT int DeviceVideoCaptureMaxBufferPoolSize();

}  // namespace media

#endif  // MEDIA_CAPTURE_VIDEO_VIDEO_CAPTURE_BUFFER_POOL_UTIL_H_
