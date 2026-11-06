// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Payments churned users strike database implementation
// summary: Implements the required seven-day delay since the last strike for the payments churned users strike database.
// ---

#include "components/autofill/core/browser/strike_databases/payments/payments_churned_users_strike_database.h"

#include <optional>

#include "base/time/time.h"

namespace autofill {

std::optional<base::TimeDelta>
PaymentsChurnedUsersStrikeDatabase::GetRequiredDelaySinceLastStrike() const {
  return base::Days(kPaymentsChurnedUsersEnforcedDelayInDays);
}

}  // namespace autofill
