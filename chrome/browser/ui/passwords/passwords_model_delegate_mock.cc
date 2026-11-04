// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PasswordsModelDelegateMock implementation
// summary: Provides constructor and destructor definitions for the PasswordsModelDelegateMock test double.
// ---

#include "chrome/browser/ui/passwords/passwords_model_delegate_mock.h"

#include "components/password_manager/core/browser/password_form.h"
#include "components/signin/public/identity_manager/account_info.h"

PasswordsModelDelegateMock::PasswordsModelDelegateMock() = default;

PasswordsModelDelegateMock::~PasswordsModelDelegateMock() = default;
