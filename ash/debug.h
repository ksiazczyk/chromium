// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Ash debug toggles declaration
// summary: Declares exported functions to toggle debug borders, the FPS counter, and paint rects via layer tree debug state.
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_DEBUG_H_
#define ASH_DEBUG_H_

#include "ash/ash_export.h"

namespace ash {
namespace debug {

// Toggles debugging features controlled by
// cc::LayerTreeDebugState.
ASH_EXPORT void ToggleShowDebugBorders();
ASH_EXPORT void ToggleShowFpsCounter();
ASH_EXPORT void ToggleShowPaintRects();

}  // namespace debug
}  // namespace ash

#endif  // ASH_DEBUG_H_
