// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Impression history tracker mock implementation
// summary: Implements the constructor and destructor of the impression history tracker mock used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_impression_history_tracker.h"

namespace notifications {
namespace test {

MockImpressionHistoryTracker::MockImpressionHistoryTracker() = default;

MockImpressionHistoryTracker::~MockImpressionHistoryTracker() = default;

}  // namespace test
}  // namespace notifications
