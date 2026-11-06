// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock user permission service implementation
// summary: Implements the mock UserPermissionService that stubs permission and consent checks for tests.
// ---

#include "components/device_signals/core/browser/mock_user_permission_service.h"

namespace device_signals {

MockUserPermissionService::MockUserPermissionService() = default;
MockUserPermissionService::~MockUserPermissionService() = default;

}  // namespace device_signals
