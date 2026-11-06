// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockTracker implementation
// summary: Implements the constructor and destructor of the gmock-based MockTracker used by feature engagement tests.
// ---

#include "components/feature_engagement/test/mock_tracker.h"

namespace feature_engagement {
namespace test {

MockTracker::MockTracker() = default;

MockTracker::~MockTracker() = default;

}  // namespace test
}  // namespace feature_engagement
