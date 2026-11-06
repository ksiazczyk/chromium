// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 menu utilities
// summary: Implements platform menu utilities for X11, providing the current keyboard modifier state used by menu handling.
// ---

#include "ui/ozone/platform/x11/x11_menu_utils.h"

#include "ui/events/x/events_x_utils.h"

namespace ui {

X11MenuUtils::X11MenuUtils() = default;

X11MenuUtils::~X11MenuUtils() = default;

int X11MenuUtils::GetCurrentKeyModifiers() const {
  return GetModifierKeyState();
}

}  // namespace ui
