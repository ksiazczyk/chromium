// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockSyncStatusObserver implementation
// summary: Implements the constructor and destructor of the MockSyncStatusObserver test double for sync status observation.
// ---

#include "chrome/browser/sync_file_system/local/mock_sync_status_observer.h"

namespace sync_file_system {

MockSyncStatusObserver::MockSyncStatusObserver() = default;

MockSyncStatusObserver::~MockSyncStatusObserver() = default;

}  // namespace sync_file_system
