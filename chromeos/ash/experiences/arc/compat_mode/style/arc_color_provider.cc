// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ARC color provider implementation
// summary: Implements IsDarkModeEnabled for ARC compat mode by querying the ash dark/light mode controller, returning false when the controller is unavailable such as in unit tests.
// ---

#include "chromeos/ash/experiences/arc/compat_mode/style/arc_color_provider.h"

#include "ash/style/dark_light_mode_controller_impl.h"

namespace arc {

bool IsDarkModeEnabled() {
  auto* dark_light_mode_controller = ash::DarkLightModeControllerImpl::Get();
  // |dark_light_mode_controller| may return null in unit testing.
  if (!dark_light_mode_controller) {
    return false;
  }
  return dark_light_mode_controller->IsDarkModeEnabled();
}

}  // namespace arc
