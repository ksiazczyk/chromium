// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Password check referrer logging
// summary: Implements logging of PasswordCheckReferrer values to the PasswordManager.BulkCheck.PasswordCheckReferrer UMA histogram.
// ---

#include "components/password_manager/core/browser/ui/password_check_referrer.h"

#include "base/metrics/histogram_functions.h"

namespace password_manager {

constexpr char kPasswordCheckReferrerHistogram[] =
    "PasswordManager.BulkCheck.PasswordCheckReferrer";

void LogPasswordCheckReferrer(PasswordCheckReferrer referrer) {
  base::UmaHistogramEnumeration(kPasswordCheckReferrerHistogram, referrer);
}

}  // namespace password_manager
