// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Smart selection feature flag definitions
// summary: Defines the feature flag and timeout parameter for requesting smart selection suggestions from the Model Execution Service.
// ---

#include "chrome/browser/selection/features.h"

namespace selection {

BASE_FEATURE(kSmartSelectionServerSuggestions,
             base::FEATURE_DISABLED_BY_DEFAULT);

BASE_FEATURE_PARAM(base::TimeDelta,
                   kSmartSelectionServerTimeout,
                   &kSmartSelectionServerSuggestions,
                   base::Seconds(20));

}  // namespace selection
