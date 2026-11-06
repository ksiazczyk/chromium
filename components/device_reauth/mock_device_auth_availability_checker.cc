// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock device auth availability checker implementation
// summary: Implements the constructor and destructor of the mock device auth availability checker used by tests.
// ---

#include "components/device_reauth/mock_device_auth_availability_checker.h"

namespace device_reauth {

MockDeviceAuthAvailabilityChecker::MockDeviceAuthAvailabilityChecker() =
    default;
MockDeviceAuthAvailabilityChecker::~MockDeviceAuthAvailabilityChecker() =
    default;

}  // namespace device_reauth
