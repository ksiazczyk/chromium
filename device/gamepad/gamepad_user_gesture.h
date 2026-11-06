// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Gamepad user gesture declarations
// summary: Declares the GamepadsHaveUserGesture function that reports whether any gamepad input counts as a user gesture.
// ---

#ifndef DEVICE_GAMEPAD_GAMEPAD_USER_GESTURE_H_
#define DEVICE_GAMEPAD_GAMEPAD_USER_GESTURE_H_

namespace device {

class Gamepads;

// Returns true if any of the gamepads have a button pressed or axis moved
// that would be considered a user gesture for interaction.
bool GamepadsHaveUserGesture(const Gamepads& gamepads);

}  // namespace device

#endif  // DEVICE_GAMEPAD_GAMEPAD_USER_GESTURE_H_
