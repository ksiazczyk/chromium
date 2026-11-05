// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Credential manager dialog controller mock definitions
// summary: Defines the constructor and destructor of the gmock mock for the credential manager dialog controller, used as test support.
// ---

#include "chrome/browser/ui/passwords/credential_manager_dialog_controller_mock.h"

#include "components/password_manager/core/browser/password_form.h"

CredentialManagerDialogControllerMock::CredentialManagerDialogControllerMock() =
    default;

CredentialManagerDialogControllerMock::
    ~CredentialManagerDialogControllerMock() = default;
