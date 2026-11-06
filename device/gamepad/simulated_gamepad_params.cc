// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Simulated gamepad parameters definitions
// summary: Defines the default constructors and destructors for the SimulatedGamepadParams structure.
// ---

#include "device/gamepad/simulated_gamepad_params.h"

namespace device {

SimulatedGamepadParams::SimulatedGamepadParams() = default;
SimulatedGamepadParams::SimulatedGamepadParams(SimulatedGamepadParams&& other) =
    default;
SimulatedGamepadParams& SimulatedGamepadParams::operator=(
    SimulatedGamepadParams&& other) = default;
SimulatedGamepadParams::~SimulatedGamepadParams() = default;

}  // namespace device
