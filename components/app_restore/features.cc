// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Full restore feature flag definitions
// summary: Defines the kArcWindowPredictor base feature and a helper function that reports whether the ARC window predictor is enabled.
// ---

#include "components/app_restore/features.h"

namespace full_restore {
namespace features {

BASE_FEATURE(kArcWindowPredictor, base::FEATURE_ENABLED_BY_DEFAULT);

bool IsArcWindowPredictorEnabled() {
  return base::FeatureList::IsEnabled(kArcWindowPredictor);
}

}  // namespace features
}  // namespace full_restore
