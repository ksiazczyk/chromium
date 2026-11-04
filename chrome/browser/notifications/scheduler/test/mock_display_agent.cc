// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Display agent mock implementation
// summary: Implements the constructor and destructor of the display agent mock used in scheduler tests.
// ---

#include "chrome/browser/notifications/scheduler/test/mock_display_agent.h"

namespace notifications {
namespace test {

MockDisplayAgent::MockDisplayAgent() = default;

MockDisplayAgent::~MockDisplayAgent() = default;

}  // namespace test
}  // namespace notifications
