// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Sync engine stopped checker implementation
// summary: Implements a status change checker that waits until the sync engine is no longer initialized and records the sync status when it stops.
// ---

#include "chrome/browser/sync/test/integration/sync_engine_stopped_checker.h"

namespace syncer {

SyncEngineStoppedChecker::SyncEngineStoppedChecker(
    syncer::SyncServiceImpl* service)
    : SingleClientStatusChangeChecker(service) {}

// StatusChangeChecker implementation.
bool SyncEngineStoppedChecker::IsExitConditionSatisfied(std::ostream* os) {
  *os << "Waiting for sync to stop";
  return !service()->IsEngineInitialized();
}

void SyncEngineStoppedChecker::WaitDone() {
  service()->QueryDetailedSyncStatusForDebugging(&status_on_engine_stopped_);
}

}  // namespace syncer
