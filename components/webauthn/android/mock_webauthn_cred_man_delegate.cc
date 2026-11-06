// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Credential Manager delegate implementation
// summary: Implements the mock WebAuthnCredManDelegate used in place of the real delegate during tests.
// ---

#include "components/webauthn/android/mock_webauthn_cred_man_delegate.h"

#include "components/webauthn/android/webauthn_cred_man_delegate.h"

namespace webauthn {

MockWebAuthnCredManDelegate::MockWebAuthnCredManDelegate()
    : WebAuthnCredManDelegate(/*web_contents=*/nullptr) {}

MockWebAuthnCredManDelegate::~MockWebAuthnCredManDelegate() = default;

}  // namespace webauthn
