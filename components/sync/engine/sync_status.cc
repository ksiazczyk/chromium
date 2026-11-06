// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SyncStatus struct implementation
// summary: Implements the default constructor, copy constructor and destructor of the SyncStatus struct.
// ---

#include "components/sync/engine/sync_status.h"

namespace syncer {

SyncStatus::SyncStatus() = default;

SyncStatus::SyncStatus(const SyncStatus& other) = default;

SyncStatus::~SyncStatus() = default;

}  // namespace syncer
