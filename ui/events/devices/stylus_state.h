// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stylus state enum
// summary: Defines the StylusState enum indicating whether a stylus is inserted into or removed from the device.
// ---

#ifndef UI_EVENTS_DEVICES_STYLUS_STATE_H_
#define UI_EVENTS_DEVICES_STYLUS_STATE_H_

namespace ui {

// Current state of the stylus (ie, inside or outside of the device).
enum class StylusState { REMOVED, INSERTED };

}  // namespace ui

#endif  // UI_EVENTS_DEVICES_STYLUS_STATE_H_
