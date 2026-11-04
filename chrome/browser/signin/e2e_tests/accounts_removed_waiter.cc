// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Accounts removed waiter implementation
// summary: Implements a helper that waits until all accounts with refresh tokens have been removed from the IdentityManager.
// ---

#include "accounts_removed_waiter.h"

namespace signin::test {

AccountsRemovedWaiter::AccountsRemovedWaiter(
    signin::IdentityManager* identity_manager)
    : identity_manager_(identity_manager) {
  CHECK(identity_manager_, base::NotFatalUntil::M162);
}

AccountsRemovedWaiter::~AccountsRemovedWaiter() = default;

void AccountsRemovedWaiter::Wait() {
  if (identity_manager_->GetAccountsWithRefreshTokens().empty())
    return;
  observation_.Observe(identity_manager_.get());
  run_loop_.Run();
}

void AccountsRemovedWaiter::OnRefreshTokenRemovedForAccount(
    const CoreAccountId& account_id) {
  if (!identity_manager_->GetAccountsWithRefreshTokens().empty())
    return;
  observation_.Reset();
  run_loop_.Quit();
}

}  // namespace signin::test
