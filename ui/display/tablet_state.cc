// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabletState helpers implementation
// summary: Implements IsTabletStateChanging, which reports whether the device is in the process of entering or exiting tablet mode.
// ---

#include "ui/display/tablet_state.h"

namespace display {

bool IsTabletStateChanging(TabletState state) {
  return state == TabletState::kEnteringTabletMode ||
         state == TabletState::kExitingTabletMode;
}

}  // namespace display
