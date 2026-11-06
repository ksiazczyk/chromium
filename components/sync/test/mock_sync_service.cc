// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockSyncService implementation
// summary: Implements MockSyncService construction and returns a mock SyncUserSettings instance from the GetUserSettings methods.
// ---

#include "components/sync/test/mock_sync_service.h"

namespace syncer {

MockSyncService::MockSyncService() = default;

MockSyncService::~MockSyncService() = default;

syncer::SyncUserSettingsMock* MockSyncService::GetMockUserSettings() {
  return &user_settings_;
}

syncer::SyncUserSettings* MockSyncService::GetUserSettings() {
  return &user_settings_;
}

const syncer::SyncUserSettings* MockSyncService::GetUserSettings() const {
  return &user_settings_;
}

}  // namespace syncer
