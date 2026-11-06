// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Autofill optimization feature flag definitions
// summary: Defines disabled-by-default base features that optimize form extraction and form mutation tracking for iOS Autofill.
// ---

#include "components/autofill/ios/common/autofill_optimization_features.h"

namespace autofill::features {

BASE_FEATURE(kAutofillOptimizationFormSearchIos,
             base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE(kAutofillTrackFormMutationsOptimizationIos,
             base::FEATURE_DISABLED_BY_DEFAULT);

}  // namespace autofill::features
