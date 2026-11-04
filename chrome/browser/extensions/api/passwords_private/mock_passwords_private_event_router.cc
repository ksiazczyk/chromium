// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock PasswordsPrivateEventRouter implementation
// summary: Implements the constructor and destructor of the mock PasswordsPrivateEventRouter used as test support.
// ---

#include "chrome/browser/extensions/api/passwords_private/mock_passwords_private_event_router.h"

namespace extensions {

MockPasswordsPrivateEventRouter::MockPasswordsPrivateEventRouter() = default;

MockPasswordsPrivateEventRouter::~MockPasswordsPrivateEventRouter() = default;

}  // namespace extensions
