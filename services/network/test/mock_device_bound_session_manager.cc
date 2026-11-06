// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock device bound session manager implementation
// summary: Implements the constructor and destructor of the mock device bound session manager used in network tests.
// ---

#include "services/network/test/mock_device_bound_session_manager.h"

namespace network {

MockDeviceBoundSessionManager::MockDeviceBoundSessionManager() = default;
MockDeviceBoundSessionManager::~MockDeviceBoundSessionManager() = default;

}  // namespace network
