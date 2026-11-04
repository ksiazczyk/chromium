// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock network state helper implementation
// summary: Implements the constructor and destructor of the mocked network state helper used by login tests.
// ---

#include "chrome/browser/ash/login/mock_network_state_helper.h"

namespace ash {
namespace login {

MockNetworkStateHelper::MockNetworkStateHelper() = default;
MockNetworkStateHelper::~MockNetworkStateHelper() = default;

}  // namespace login
}  // namespace ash
