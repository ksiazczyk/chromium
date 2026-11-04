// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock feature status tracker implementation
// summary: Implements MockFeatureStatusTracker with default constructor and destructor as a GMock test double for the Quick Pair feature status tracker.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_quick_pair_feature_status_tracker.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_quick_pair_feature_status_tracker.h"

namespace ash {
namespace quick_pair {

MockFeatureStatusTracker::MockFeatureStatusTracker() = default;

MockFeatureStatusTracker::~MockFeatureStatusTracker() = default;

}  // namespace quick_pair
}  // namespace ash
