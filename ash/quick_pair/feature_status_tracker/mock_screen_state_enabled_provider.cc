// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock screen state enabled provider implementation
// summary: Implements MockScreenStateEnabledProvider with default constructor and destructor as a GMock test double for the screen state provider.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/mock_screen_state_enabled_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/mock_screen_state_enabled_provider.h"

namespace ash {
namespace quick_pair {

MockScreenStateEnabledProvider::MockScreenStateEnabledProvider() = default;

MockScreenStateEnabledProvider::~MockScreenStateEnabledProvider() = default;

}  // namespace quick_pair
}  // namespace ash