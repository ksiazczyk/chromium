// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Smart card histogram recording
// summary: Records the SmartCard.ConnectionClosedReason UMA histogram when a smart card connection is closed.
// ---

#include "content/browser/smart_card/smart_card_histograms.h"

#include "base/metrics/histogram_functions.h"

void RecordSmartCardConnectionClosedReason(
    SmartCardConnectionClosedReason reason) {
  base::UmaHistogramEnumeration("SmartCard.ConnectionClosedReason", reason);
}
