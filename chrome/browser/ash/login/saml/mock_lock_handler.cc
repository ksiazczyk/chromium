// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock lock handler implementation
// summary: Implements the constructor and destructor of MockLockHandler used in SAML login tests.
// ---

#include "chrome/browser/ash/login/saml/mock_lock_handler.h"

namespace ash {

MockLockHandler::MockLockHandler() = default;

MockLockHandler::~MockLockHandler() = default;

}  // namespace ash
