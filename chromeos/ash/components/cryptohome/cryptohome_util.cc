// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GetCryptohomeId helper implementation
// summary: Implements GetCryptohomeId, which maps an AccountId to the cryptohome account id string used by cryptohome calls.
// ---

#include "chromeos/ash/components/cryptohome/cryptohome_util.h"

#include <string>

#include "components/account_id/account_id.h"

namespace cryptohome {

const std::string GetCryptohomeId(const AccountId& account_id) {
  switch (account_id.GetAccountType()) {
    case AccountType::UNKNOWN:
    case AccountType::GOOGLE:
      return account_id.GetUserEmail();
  }
}

}  // namespace cryptohome
