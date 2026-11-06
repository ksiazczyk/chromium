// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default device posture platform provider
// summary: Provides a no-op provider implementation for platforms without device posture support.
// ---

#include "content/browser/device_posture/device_posture_platform_provider_default.h"

namespace content {

DevicePosturePlatformProviderDefault::DevicePosturePlatformProviderDefault() =
    default;

DevicePosturePlatformProviderDefault::~DevicePosturePlatformProviderDefault() =
    default;

void DevicePosturePlatformProviderDefault::StartListening() {}

void DevicePosturePlatformProviderDefault::StopListening() {}

}  // namespace content
