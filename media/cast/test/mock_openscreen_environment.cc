// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockOpenscreenEnvironment implementation
// summary: Implements the constructor and destructor of the MockOpenscreenEnvironment test double for the openscreen Cast Environment.
// ---

#include "media/cast/test/mock_openscreen_environment.h"

namespace media::cast {

MockOpenscreenEnvironment::MockOpenscreenEnvironment(
    openscreen::ClockNowFunctionPtr now_function,
    openscreen::TaskRunner& task_runner)
    : Environment(now_function, task_runner) {}

MockOpenscreenEnvironment::~MockOpenscreenEnvironment() = default;

}  // namespace media::cast
