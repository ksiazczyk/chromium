// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock video capture provider implementation
// summary: Provides default constructors and destructors for the video capture provider, device launcher and launched device mock classes.
// ---

#include "content/browser/renderer_host/media/mock_video_capture_provider.h"

namespace content {

MockVideoCaptureProvider::MockVideoCaptureProvider() = default;

MockVideoCaptureProvider::~MockVideoCaptureProvider() = default;

MockVideoCaptureDeviceLauncher::MockVideoCaptureDeviceLauncher() = default;

MockVideoCaptureDeviceLauncher::~MockVideoCaptureDeviceLauncher() = default;

MockLaunchedVideoCaptureDevice::MockLaunchedVideoCaptureDevice() = default;

MockLaunchedVideoCaptureDevice::~MockLaunchedVideoCaptureDevice() = default;

}  // namespace content
