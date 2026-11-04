// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock delegated task runner implementation
// summary: Implements the constructor and destructor of the MockDelegatedTaskRunner gmock test double used in delegated task tests.
// ---

#include "chrome/browser/platform_experience/delegated_tasks/test_support/mock_delegated_task_runner.h"

namespace platform_experience {

MockDelegatedTaskRunner::MockDelegatedTaskRunner() = default;
MockDelegatedTaskRunner::~MockDelegatedTaskRunner() = default;

}  // namespace platform_experience
