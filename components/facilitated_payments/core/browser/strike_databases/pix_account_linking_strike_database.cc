// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pix account linking strike database implementation
// summary: Implements the required delay override for the Pix account linking strike database, returning the seven-day delay between strikes.
// ---

#include "components/facilitated_payments/core/browser/strike_databases/pix_account_linking_strike_database.h"

namespace payments::facilitated {

std::optional<base::TimeDelta>
PixAccountLinkingStrikeDatabase::GetRequiredDelaySinceLastStrike() const {
  return kDelaySinceLastStrike;
}

}  // namespace payments::facilitated
