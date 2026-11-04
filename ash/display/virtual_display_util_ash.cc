// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VirtualDisplayUtil Ash factory
// summary: Implements VirtualDisplayUtil::TryCreate for Ash, returning a DisplayManagerTestApi so tests can create and manage virtual displays.
// relations:
//   - implements /ui/display/test/virtual_display_util.h
//   - depends_on /ui/display/test/display_manager_test_api.h
//   - depends_on /ash/shell.h
// ---

#include "ash/shell.h"
#include "ui/display/test/display_manager_test_api.h"
#include "ui/display/test/virtual_display_util.h"
#include "ui/gfx/geometry/size.h"

namespace display::test {

// static
std::unique_ptr<VirtualDisplayUtil> VirtualDisplayUtil::TryCreate(
    Screen* screen) {
  return std::make_unique<DisplayManagerTestApi>(
      ash::Shell::Get()->display_manager());
}

}  // namespace display::test
