// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account Manager test helper implementation
// summary: Implements CreateTestGaiaAccount, which derives a Gaia ID from a raw email and returns a test Account for Account Manager tests.
// ---

#include "components/account_manager_core/account_manager_test_util.h"
#include "components/account_manager_core/account.h"

namespace account_manager {

Account CreateTestGaiaAccount(const std::string& raw_email) {
  // TODO(crbug.com/40158025): Use signin::GetTestGaiaIdForEmail here.
  AccountKey key(std::string("gaia_id_for_") + raw_email, AccountType::kGaia);
  return {key, raw_email};
}

}  // namespace account_manager
