// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Structured metrics histogram logging implementation
// summary: Implements UMA histogram logging of internal errors and key validation states.
// ---

#include "components/metrics/structured/lib/histogram_util.h"

#include "base/metrics/histogram_macros.h"

namespace metrics::structured {

void LogInternalError(StructuredMetricsError error) {
  UMA_HISTOGRAM_ENUMERATION("UMA.StructuredMetrics.InternalError2", error);
}

void LogKeyValidation(KeyValidationState state) {
  UMA_HISTOGRAM_ENUMERATION("UMA.StructuredMetrics.KeyValidationState", state);
}

}  // namespace metrics::structured
