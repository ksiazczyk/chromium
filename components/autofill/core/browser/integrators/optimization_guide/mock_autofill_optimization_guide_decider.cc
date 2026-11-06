// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock AutofillOptimizationGuideDecider implementation
// summary: Provides the constructor and destructor of the mock decider used as a test double in autofill tests.
// ---

#include "components/autofill/core/browser/integrators/optimization_guide/mock_autofill_optimization_guide_decider.h"

namespace autofill {

MockAutofillOptimizationGuideDecider::MockAutofillOptimizationGuideDecider()
    : AutofillOptimizationGuideDecider(nullptr) {}
MockAutofillOptimizationGuideDecider::~MockAutofillOptimizationGuideDecider() =
    default;

}  // namespace autofill
