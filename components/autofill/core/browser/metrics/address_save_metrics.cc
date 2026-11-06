// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Address save metrics implementation
// summary: Logs a UMA histogram recording the surface where a new address was manually added, such as the context menu prompt or settings.
// ---

#include "components/autofill/core/browser/metrics/address_save_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace autofill::autofill_metrics {

void LogManuallyAddedAddress(AutofillManuallyAddedAddressSurface surface) {
  base::UmaHistogramEnumeration("Autofill.AddedNewAddress", surface);
}

}  // namespace autofill::autofill_metrics
