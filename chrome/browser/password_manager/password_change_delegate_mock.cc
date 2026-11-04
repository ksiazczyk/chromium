// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PasswordChangeDelegateMock implementation
// summary: Implements the constructor, destructor, and weak pointer support for the PasswordChangeDelegateMock test double.
// ---

#include "chrome/browser/password_manager/password_change_delegate_mock.h"

PasswordChangeDelegateMock::PasswordChangeDelegateMock() = default;
PasswordChangeDelegateMock::~PasswordChangeDelegateMock() = default;

base::WeakPtr<PasswordChangeDelegate> PasswordChangeDelegateMock::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}
