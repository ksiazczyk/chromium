// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock sync service creation utility implementation
// summary: Creates a NiceMock-wrapped MockSyncService as a keyed service for a given profile, for use in tests.
// ---

#include "ios/chrome/browser/sync/model/mock_sync_service_utils.h"

#include "ios/chrome/browser/shared/model/profile/profile_ios.h"

std::unique_ptr<KeyedService> CreateMockSyncService(ProfileIOS* profile) {
  return std::make_unique<testing::NiceMock<syncer::MockSyncService>>();
}
