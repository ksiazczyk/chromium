// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock device authenticator implementation
// summary: Implements the constructor and destructor of the mock device authenticator used by tests.
// ---

#include "components/device_reauth/mock_device_authenticator.h"

namespace device_reauth {

MockDeviceAuthenticator::MockDeviceAuthenticator() = default;
MockDeviceAuthenticator::~MockDeviceAuthenticator() = default;

}  // namespace device_reauth
