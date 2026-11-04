// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature Showcase step eligibility checker default timeout implementation
// summary: Implements the base eligibility checker's OnTimeout method, which by default reports the step as ineligible.
// ---

#include "chrome/browser/ui/views/profiles/feature_showcase/feature_showcase_step_eligibility_checker.h"

bool FeatureShowcaseStepEligibilityChecker::OnTimeout() {
  return false;
}
