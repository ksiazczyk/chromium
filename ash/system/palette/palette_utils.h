// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Palette utility function declarations
// summary: Declares palette_utils helpers for hit-testing palette tray points in screen space and detecting an active user session that can show stylus tools.
// ---

#ifndef ASH_SYSTEM_PALETTE_PALETTE_UTILS_H_
#define ASH_SYSTEM_PALETTE_PALETTE_UTILS_H_

#include "ash/ash_export.h"

namespace gfx {
class Point;
}

namespace ash {
namespace palette_utils {

// Returns true if either the palette icon or the palette widget contain the
// given point (in screen space).
ASH_EXPORT bool PaletteContainsPointInScreen(const gfx::Point& point);

// Returns true if we are in a user session that can show the stylus tools.
ASH_EXPORT bool IsInUserSession();

}  // namespace palette_utils
}  // namespace ash

#endif  // ASH_SYSTEM_PALETTE_PALETTE_UTILS_H_
