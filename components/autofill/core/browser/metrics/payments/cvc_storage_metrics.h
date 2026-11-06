// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CVC storage metrics header
// summary: Declares the startup logging function for the payments CVC storage enabled state.
// ---

#ifndef COMPONENTS_AUTOFILL_CORE_BROWSER_METRICS_PAYMENTS_CVC_STORAGE_METRICS_H_
#define COMPONENTS_AUTOFILL_CORE_BROWSER_METRICS_PAYMENTS_CVC_STORAGE_METRICS_H_


namespace autofill::autofill_metrics {

// This should be called each time a new profile is launched and
// `IsAutofillPaymentMethodsEnabled` is true.
void LogIsAutofillPaymentsCvcStorageEnabledAtStartup(bool enabled);

}  // namespace autofill::autofill_metrics

#endif  // COMPONENTS_AUTOFILL_CORE_BROWSER_METRICS_PAYMENTS_CVC_STORAGE_METRICS_H_
