// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Window tree host lookup by display ID
// summary: Implements GetWindowTreeHostForDisplay, returning the aura WindowTreeHost for a display ID via the matching root window controller.
// relations:
//   - depends_on /ash/public/cpp/window_tree_host_lookup.h
//   - depends_on /ash/root_window_controller.h
//   - depends_on /ash/shell.h
// ---

#include "ash/public/cpp/window_tree_host_lookup.h"

#include "ash/root_window_controller.h"
#include "ash/shell.h"

namespace ash {

aura::WindowTreeHost* GetWindowTreeHostForDisplay(int64_t display_id) {
  auto* root_window_controller =
      Shell::GetRootWindowControllerWithDisplayId(display_id);
  return root_window_controller ? root_window_controller->GetHost() : nullptr;
}

}  // namespace ash
