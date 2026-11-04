// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock signin UI delegate implementation
// summary: Implements the constructor and destructor of the mock SigninUiDelegate used in signin tests.
// ---

#include "chrome/browser/signin/mock_signin_ui_delegate.h"

namespace signin_ui_util {

MockSigninUiDelegate::MockSigninUiDelegate() = default;
MockSigninUiDelegate::~MockSigninUiDelegate() = default;

}  // namespace signin_ui_util
