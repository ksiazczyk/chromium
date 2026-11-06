// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Card info retrieval enrolled metrics implementation
// summary: Implements histogram logging of form events and unmask results for credit cards enrolled in card info retrieval.
// ---

#include "components/autofill/core/browser/metrics/payments/card_info_retrieval_enrolled_metrics.h"

#include "base/metrics/histogram_functions.h"

namespace autofill::autofill_metrics {

void LogCardInfoRetrievalEnrolledFormEventMetric(
    CardInfoRetrievalEnrolledLoggingEvent event) {
  base::UmaHistogramEnumeration(
      "Autofill.FormEvents.CreditCard.CardInfoRetrievalEnrolled", event);
}

void LogCardInfoRetrievalEnrolledUnmaskResult(
    CardInfoRetrievalEnrolledUnmaskResult unmask_result) {
  base::UmaHistogramEnumeration("Autofill.CardInfoRetrievalEnrolled.Result",
                                unmask_result);
}

}  // namespace autofill::autofill_metrics
