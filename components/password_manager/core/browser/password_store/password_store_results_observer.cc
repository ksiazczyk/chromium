// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordStoreResultsObserver implementation
// summary: Implements a helper consumer that stores GetLogins results and quits a run loop when they arrive so callers can wait for them.
// ---

#include "components/password_manager/core/browser/password_store/password_store_results_observer.h"

#include <utility>

#include "components/password_manager/core/browser/password_store/stored_credential.h"

namespace password_manager {

PasswordStoreResultsObserver::PasswordStoreResultsObserver() = default;
PasswordStoreResultsObserver::~PasswordStoreResultsObserver() = default;

void PasswordStoreResultsObserver::OnGetPasswordStoreResultsOrErrorFrom(
    PasswordStoreInterface* store,
    base::expected<std::vector<StoredCredential>, PasswordStoreBackendError>
        results_or_error) {
  results_ = std::move(results_or_error).value_or({});
  run_loop_.Quit();
}

base::WeakPtr<password_manager::PasswordStoreConsumer>
PasswordStoreResultsObserver::GetWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

std::vector<StoredCredential> PasswordStoreResultsObserver::WaitForResults() {
  run_loop_.Run();
  return std::move(results_);
}

}  // namespace password_manager
