// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GamepadEvent implementation
// summary: Implements the GamepadEvent constructor that stores device id, event type, evdev scancode, value and timestamp.
// ---

#include "ui/events/ozone/gamepad/gamepad_event.h"

namespace ui {

GamepadEvent::GamepadEvent(int device_id,
                           GamepadEventType type,
                           uint16_t code,
                           double value,
                           base::TimeTicks timestamp)
    : device_id_(device_id),
      type_(type),
      code_(code),
      value_(value),
      timestamp_(timestamp) {}

}  // namespace ui
