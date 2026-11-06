// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock sync engine implementation
// summary: Implements the constructor and destructor of the MockSyncEngine test double for the sync engine.
// ---

#include "components/sync/test/mock_sync_engine.h"

namespace syncer {

MockSyncEngine::MockSyncEngine() = default;

MockSyncEngine::~MockSyncEngine() = default;

}  // namespace syncer
