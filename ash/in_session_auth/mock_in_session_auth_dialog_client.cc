// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock in-session auth dialog client implementation
// summary: Implements the mock in-session auth dialog client, which registers itself with the WebAuthn dialog controller on construction for use in tests.
// relations:
//   - implements /ash/in_session_auth/mock_in_session_auth_dialog_client.h
//   - depends_on /ash/in_session_auth/webauthn_dialog_controller_impl.h
//   - depends_on /ash/shell.h
// ---

#include "ash/in_session_auth/mock_in_session_auth_dialog_client.h"

#include "ash/in_session_auth/webauthn_dialog_controller_impl.h"
#include "ash/shell.h"

namespace ash {

MockInSessionAuthDialogClient::MockInSessionAuthDialogClient() {
  Shell::Get()->webauthn_dialog_controller()->SetClient(this);
}

MockInSessionAuthDialogClient::~MockInSessionAuthDialogClient() {
  Shell::Get()->webauthn_dialog_controller()->SetClient(nullptr);
}

}  // namespace ash
