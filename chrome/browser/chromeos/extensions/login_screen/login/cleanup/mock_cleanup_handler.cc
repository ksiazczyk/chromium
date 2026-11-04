// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockCleanupHandler implementation
// summary: Implements the constructor and destructor of MockCleanupHandler, a gmock-based mock of CleanupHandler used in tests.
// ---

#include "chrome/browser/chromeos/extensions/login_screen/login/cleanup/mock_cleanup_handler.h"

namespace chromeos {

MockCleanupHandler::MockCleanupHandler() = default;

MockCleanupHandler::~MockCleanupHandler() = default;

}  // namespace chromeos
