// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock auto-reauthn permission delegate implementation
// summary: Provides constructor and destructor definitions for the mocked federated identity auto-reauthn permission delegate.
// ---

#include "content/browser/webid/test/mock_auto_reauthn_permission_delegate.h"

namespace content {

MockAutoReauthnPermissionDelegate::MockAutoReauthnPermissionDelegate() =
    default;

MockAutoReauthnPermissionDelegate::~MockAutoReauthnPermissionDelegate() =
    default;

}  // namespace content
