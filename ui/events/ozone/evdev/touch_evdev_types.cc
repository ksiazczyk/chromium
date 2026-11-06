// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Touch evdev type implementations
// summary: Defines constructors and destructors for the in-progress touch and stylus state structs used by the evdev touch converters.
// ---

#include "ui/events/ozone/evdev/touch_evdev_types.h"

namespace ui {

InProgressTouchEvdev::InProgressTouchEvdev() = default;

InProgressTouchEvdev::InProgressTouchEvdev(const InProgressTouchEvdev& other) =
    default;

InProgressTouchEvdev::~InProgressTouchEvdev() = default;

InProgressStylusState::InProgressStylusState() = default;

InProgressStylusState::InProgressStylusState(
    const InProgressStylusState& other) = default;

InProgressStylusState::~InProgressStylusState() = default;

}  // namespace ui
