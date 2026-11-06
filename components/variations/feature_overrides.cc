// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Feature overrides implementation
// summary: Implements FeatureOverrides, which collects enable and disable feature overrides and registers them as extra overrides on a base::FeatureList when destroyed.
// ---

#include "components/variations/feature_overrides.h"

namespace variations {

FeatureOverrides::FeatureOverrides(base::FeatureList& feature_list)
    : feature_list_(feature_list) {}

FeatureOverrides::~FeatureOverrides() {
  feature_list_->RegisterExtraFeatureOverrides(
      std::move(overrides_), /*replace_use_default_overrides=*/true);
}

void FeatureOverrides::EnableFeature(const base::Feature& feature) {
  overrides_.emplace_back(
      std::cref(feature),
      base::FeatureList::OverrideState::OVERRIDE_ENABLE_FEATURE);
}

void FeatureOverrides::DisableFeature(const base::Feature& feature) {
  overrides_.emplace_back(
      std::cref(feature),
      base::FeatureList::OverrideState::OVERRIDE_DISABLE_FEATURE);
}

}  // namespace variations
