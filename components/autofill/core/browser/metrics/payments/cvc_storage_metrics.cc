// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CVC storage metrics implementation
// summary: Logs a boolean histogram recording whether payments CVC storage is enabled at browser startup.
// ---

#include "components/autofill/core/browser/metrics/payments/cvc_storage_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace autofill::autofill_metrics {

void LogIsAutofillPaymentsCvcStorageEnabledAtStartup(bool enabled) {
  base::UmaHistogramBoolean(
      "Autofill.PaymentMethods.CvcStorageIsEnabled.Startup", enabled);
}

}  // namespace autofill::autofill_metrics
