// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GamepadDevice implementation
// summary: Implements the GamepadDevice class constructors and destructor for representing gamepad device state.
// ---

#include "ui/events/devices/gamepad_device.h"

namespace ui {

GamepadDevice::GamepadDevice(const InputDevice& input_device,
                             std::vector<GamepadDevice::Axis>&& axes,
                             bool supports_rumble)
    : InputDevice(input_device),
      axes(std::move(axes)),
      supports_vibration_rumble(supports_rumble) {}

GamepadDevice::GamepadDevice(const GamepadDevice& other) = default;

GamepadDevice::~GamepadDevice() = default;

}  // namespace ui
