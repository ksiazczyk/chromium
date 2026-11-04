// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ScopedTestDeviceSettingsService implementation
// summary: Implements a scoped helper that initializes the DeviceSettingsService singleton on construction and stops processing and shuts it down on destruction.
// ---

#include "chrome/browser/ash/settings/scoped_test_device_settings_service.h"

#include "chrome/browser/ash/settings/device_settings_service.h"

namespace ash {

ScopedTestDeviceSettingsService::ScopedTestDeviceSettingsService() {
  DeviceSettingsService::Initialize();
}

ScopedTestDeviceSettingsService::~ScopedTestDeviceSettingsService() {
  // Clean pending operations.
  DeviceSettingsService::Get()->StopProcessing();
  DeviceSettingsService::Shutdown();
}

}  // namespace ash
