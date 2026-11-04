// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Predictor command-line switches
// summary: Defines the switch that lets the loading predictor prefetch local IP addresses for testing purposes.
// ---

#include "chrome/browser/predictors/predictors_switches.h"

namespace switches {

// Allows the loading predictor to do prefetches to local IP addresses. This is
// needed for testing as such requests are blocked by default for security.
const char kLoadingPredictorAllowLocalRequestForTesting[] =
    "loading-predictor-allow-local-request-for-testing";

}  // namespace switches
