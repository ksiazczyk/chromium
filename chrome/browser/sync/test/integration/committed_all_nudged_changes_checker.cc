// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Committed nudged changes checker implementation
// summary: Implements a status checker that blocks until all nudged sync changes have been committed to the server.
// ---

#include "chrome/browser/sync/test/integration/committed_all_nudged_changes_checker.h"

#include "components/sync/service/sync_service_impl.h"

CommittedAllNudgedChangesChecker::CommittedAllNudgedChangesChecker(
    syncer::SyncServiceImpl* service)
    : SingleClientStatusChangeChecker(service) {
  service->HasUnsyncedItemsForTest(
      base::BindOnce(&CommittedAllNudgedChangesChecker::GotHasUnsyncedItems,
                     weak_ptr_factory_.GetWeakPtr()));
}

CommittedAllNudgedChangesChecker::~CommittedAllNudgedChangesChecker() = default;

bool CommittedAllNudgedChangesChecker::IsExitConditionSatisfied(
    std::ostream* os) {
  *os << "Waiting for all committed items";

  // Check that progress markers are non-empty to verify that there was at least
  // one sync cycle.
  return has_unsynced_items_.has_value() && !has_unsynced_items_.value();
}

void CommittedAllNudgedChangesChecker::GotHasUnsyncedItems(
    bool has_unsynced_items) {
  has_unsynced_items_ = has_unsynced_items;
  CheckExitCondition();
}

void CommittedAllNudgedChangesChecker::OnSyncCycleCompleted(
    syncer::SyncService* sync) {
  // Run another check after successful commit to verify that there weren't new
  // nudges since last sync cycle started. HasUnsyncedItemsForTest() posts a
  // task to the sync thread which guarantees that all tasks posted to the same
  // thread have been processed.
  has_unsynced_items_.reset();
  service()->HasUnsyncedItemsForTest(
      base::BindOnce(&CommittedAllNudgedChangesChecker::GotHasUnsyncedItems,
                     weak_ptr_factory_.GetWeakPtr()));
}
