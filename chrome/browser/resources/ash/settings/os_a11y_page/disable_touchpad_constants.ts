// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Disable touchpad mode constants
// summary: Defines the DisableTouchpadMode enum for when the internal touchpad is disabled, kept in sync with the ash accessibility controller enum.
// ---

// Enumeration of the different disabled modes of the internal touchpad.
// Ensure this enum stays in sync with the enum in
// ash/public/cpp/accessibility_controller_enums.h
export enum DisableTouchpadMode {
  NEVER = 0,
  ALWAYS = 1,
  ON_MOUSE_CONNECTED = 2,
}
