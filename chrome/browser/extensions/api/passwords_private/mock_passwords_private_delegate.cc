// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock PasswordsPrivateDelegate implementation
// summary: Implements the constructor and destructor of the mock PasswordsPrivateDelegate used as test support.
// ---

#include "chrome/browser/extensions/api/passwords_private/mock_passwords_private_delegate.h"

namespace password_manager {

MockPasswordsPrivateDelegate::MockPasswordsPrivateDelegate() = default;

MockPasswordsPrivateDelegate::~MockPasswordsPrivateDelegate() = default;

}  // namespace password_manager
