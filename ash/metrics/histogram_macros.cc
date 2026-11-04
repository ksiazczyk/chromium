// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Histogram macro helper implementation
// summary: Defines the InTabletMode helper used by the tablet-aware UMA histogram macros to check the current display tablet mode state.
// relations:
//   - implements /ash/metrics/histogram_macros.h
//   - depends_on /ui/display/screen.h
// ---

#include "ash/metrics/histogram_macros.h"

#include "ui/display/screen.h"

namespace ash {

bool InTabletMode() {
  return display::Screen::Get()->InTabletMode();
}

}  // namespace ash
