// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Scoped device settings test helper implementation
// summary: Implements a scoped helper that stubs device settings and creates a fake owner settings service for the primary user in browser tests.
// ---

#include "chrome/browser/ash/app_mode/test/scoped_device_settings.h"

#include "chrome/browser/ash/ownership/fake_owner_settings_service.h"
#include "chrome/browser/profiles/profile_manager.h"

namespace ash {

ScopedDeviceSettings::ScopedDeviceSettings() : settings_helper_(false) {
  settings_helper_.ReplaceDeviceSettingsProviderWithStub();
  owner_settings_service_ = settings_helper_.CreateOwnerSettingsService(
      ProfileManager::GetPrimaryUserProfile());
}

ScopedDeviceSettings::~ScopedDeviceSettings() = default;

}  // namespace ash
