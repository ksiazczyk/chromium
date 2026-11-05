// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Google Lens step eligibility checker implementation
// summary: Checks whether the Lens overlay entry point is enabled and whether the user has already granted the needed permissions to decide step eligibility.
// ---

#include "chrome/browser/ui/views/profiles/feature_showcase/google_lens_step_eligibility_checker.h"

#include <utility>

#include "base/functional/callback.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/lens/lens_overlay_entry_point_controller.h"
#include "chrome/browser/ui/lens/lens_search_feature_flag_utils.h"

GoogleLensStepEligibilityChecker::GoogleLensStepEligibilityChecker() = default;

GoogleLensStepEligibilityChecker::~GoogleLensStepEligibilityChecker() = default;

void GoogleLensStepEligibilityChecker::CheckEligibility(
    Profile& profile,
    base::OnceCallback<void(bool)> callback) {
  if (!lens::LensOverlayEntryPointController::IsEnabledOnInit(&profile)) {
    std::move(callback).Run(false);
    return;
  }

  std::move(callback).Run(
      !lens::DidUserGrantLensOverlayNeededPermissions(&profile));
}

std::string GoogleLensStepEligibilityChecker::GetStepIdentifier() const {
  return std::string(kFeatureShowcaseGoogleLensStepIdentifier);
}
