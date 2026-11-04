// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock PehLauncher implementation
// summary: Implements MockPehLauncher, defaulting IsBinaryVerified to return true for tests.
// ---

#include "chrome/browser/platform_experience/delegated_tasks/test_support/mock_peh_launcher.h"

namespace platform_experience {

MockPehLauncher::MockPehLauncher() {
  ON_CALL(*this, IsBinaryVerified(::testing::_))
      .WillByDefault(::testing::Return(true));
}

MockPehLauncher::~MockPehLauncher() = default;

}  // namespace platform_experience
