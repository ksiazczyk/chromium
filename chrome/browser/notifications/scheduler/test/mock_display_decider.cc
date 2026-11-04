// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Display decider mock implementation
// summary: Implements the constructor and destructor of the display decider mock used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_display_decider.h"

namespace notifications {
namespace test {

MockDisplayDecider::MockDisplayDecider() = default;

MockDisplayDecider::~MockDisplayDecider() = default;

}  // namespace test
}  // namespace notifications
