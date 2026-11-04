// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock platform handle implementation
// summary: Provides the constructor and destructor for the MockPlatformHandle test double used in permission unit tests.
// ---

#include "chrome/browser/permissions/system/mock_platform_handle.h"

namespace system_permission_settings {

MockPlatformHandle::MockPlatformHandle() = default;
MockPlatformHandle::~MockPlatformHandle() = default;

}  // namespace system_permission_settings
