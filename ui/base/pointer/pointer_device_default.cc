// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default pointer device implementation
// summary: Supplies a default implementation reporting a fine pointer with hover support and no touch capability.
// ---

#include <optional>
#include <utility>
#include <vector>

#include "ui/base/pointer/pointer_device.h"

namespace ui {

std::pair<int, int> GetAvailablePointerAndHoverTypesImpl() {
  return {POINTER_TYPE_FINE, HOVER_TYPE_HOVER};
}

TouchScreensAvailability GetTouchScreensAvailability() {
  return TouchScreensAvailability::NONE;
}

int MaxTouchPoints() {
  return 0;
}

}  // namespace ui
