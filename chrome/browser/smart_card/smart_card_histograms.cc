// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Smart card permission expiry histogram recording
// summary: Implements recording of the SmartCard.OneTimePermissionExpiryReason histogram for one-time smart card permission expiry events.
// ---

#include "chrome/browser/smart_card/smart_card_histograms.h"

#include "base/metrics/histogram_functions.h"

void RecordSmartCardOneTimePermissionExpiryReason(
    SmartCardOneTimePermissionExpiryReason reason) {
  base::UmaHistogramEnumeration("SmartCard.OneTimePermissionExpiryReason",
                                reason);
}
