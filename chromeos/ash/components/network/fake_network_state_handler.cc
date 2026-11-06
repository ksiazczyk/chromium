// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake NetworkStateHandler implementation
// summary: Implements a fake NetworkStateHandler subclass with empty constructor and destructor for use in tests.
// ---

#include "chromeos/ash/components/network/fake_network_state_handler.h"

#include "chromeos/ash/components/network/network_event_log.h"

namespace ash {

FakeNetworkStateHandler::FakeNetworkStateHandler() = default;
FakeNetworkStateHandler::~FakeNetworkStateHandler() = default;

}  // namespace ash
