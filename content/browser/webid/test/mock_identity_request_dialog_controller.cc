// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock identity request dialog controller implementation
// summary: Implements the constructor and destructor of MockIdentityRequestDialogController, invoking DestructorCalled when the mock controller is destroyed.
// ---

#include "content/browser/webid/test/mock_identity_request_dialog_controller.h"

namespace content {

MockIdentityRequestDialogController::MockIdentityRequestDialogController() =
    default;

MockIdentityRequestDialogController::~MockIdentityRequestDialogController() {
  DestructorCalled();
}

}  // namespace content
