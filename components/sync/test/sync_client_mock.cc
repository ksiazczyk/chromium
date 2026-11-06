// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SyncClientMock implementation
// summary: Implements the SyncClientMock test double, defining only its constructor and destructor for the gmock-based SyncClient fake.
// ---

#include "components/sync/test/sync_client_mock.h"

namespace syncer {

SyncClientMock::SyncClientMock() = default;

SyncClientMock::~SyncClientMock() = default;

}  // namespace syncer
