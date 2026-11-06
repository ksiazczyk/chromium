// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock permission delegate implementation
// summary: Implements the default constructor and destructor of MockPermissionDelegate, a GMock test double for permission handling in WebID tests.
// ---

#include "content/browser/webid/test/mock_permission_delegate.h"

namespace content {

MockPermissionDelegate::MockPermissionDelegate() = default;

MockPermissionDelegate::~MockPermissionDelegate() = default;

}  // namespace content
