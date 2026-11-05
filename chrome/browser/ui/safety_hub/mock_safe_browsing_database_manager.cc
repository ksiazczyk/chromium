// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Safe Browsing database manager implementation
// summary: Implements a mock Safe Browsing database manager that simulates URL check responses and tracks cancelled checks for Safety Hub tests.
// ---

#include "chrome/browser/ui/safety_hub/mock_safe_browsing_database_manager.h"

MockSafeBrowsingDatabaseManager::MockSafeBrowsingDatabaseManager()
    : safe_browsing::TestSafeBrowsingDatabaseManager(
          base::SequencedTaskRunner::GetCurrentDefault()) {}

MockSafeBrowsingDatabaseManager::~MockSafeBrowsingDatabaseManager() = default;

bool MockSafeBrowsingDatabaseManager::CheckBrowseUrl(
    const GURL& gurl,
    const safe_browsing::SBThreatTypeSet& threat_types,
    Client* client,
    safe_browsing::CheckBrowseUrlType check_type) {
  CHECK(client);

  if (SimulateSafeSynchronousResponse()) {
    return true;
  }

  base::SequencedTaskRunner::GetCurrentDefault()->PostTask(
      FROM_HERE,
      base::BindOnce(&MockSafeBrowsingDatabaseManager::OnCheckBrowseURLDone,
                     this, gurl, client->GetWeakPtr()));
  return false;
}

void MockSafeBrowsingDatabaseManager::CancelCheck(Client* client) {
  called_cancel_check_ = true;
}

void MockSafeBrowsingDatabaseManager::OnCheckBrowseURLDone(
    const GURL& gurl,
    base::WeakPtr<Client> client) {
  if (called_cancel_check_) {
    return;
  }
  CHECK(client);
  client->OnCheckBrowseUrlResult(gurl, urls_threat_type_[gurl.spec()]);
}

MockSafeBrowsingDatabaseManager::ScopedSimulateSafeSynchronousResponse
MockSafeBrowsingDatabaseManager::CreateSimulateSafeSynchronousResponseScope(
    bool simulate_safe_synchronous_response) {
  return base::AutoReset<bool>(&simulate_safe_synchronous_response_,
                               simulate_safe_synchronous_response);
}
