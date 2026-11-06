// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock API permission delegate implementation
// summary: Provides constructor and destructor definitions for the mocked federated identity API permission delegate used in WebID tests.
// ---

#include "content/browser/webid/test/mock_api_permission_delegate.h"

namespace content {

MockApiPermissionDelegate::MockApiPermissionDelegate() = default;

MockApiPermissionDelegate::~MockApiPermissionDelegate() = default;

}  // namespace content
