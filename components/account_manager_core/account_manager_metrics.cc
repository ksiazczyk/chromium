// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Account Manager metrics recording
// summary: Records UMA histogram enumerations for the account addition source and the account upsertion result status.
// ---

#include "components/account_manager_core/account_manager_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace account_manager {

void RecordAccountAdditionSource(AccountAdditionSource source) {
  base::UmaHistogramEnumeration(kAccountAdditionSourceHistogramName, source);
}

void RecordAccountUpsertionResultStatus(AccountUpsertionResult::Status status) {
  base::UmaHistogramEnumeration(kAccountUpsertionResultStatusHistogramName,
                                status);
}

}  // namespace account_manager
