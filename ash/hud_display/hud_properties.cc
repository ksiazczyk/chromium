// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HUD click handler property definition
// summary: Defines the kHUDClickHandler UI class property key that marks views as click handlers for HUD hit testing.
// relations:
//   - depends_on /ash/hud_display/hud_properties.h
// ---

#include "ash/hud_display/hud_properties.h"

namespace ash {
namespace hud_display {

DEFINE_UI_CLASS_PROPERTY_KEY(HitTestCompat, kHUDClickHandler, HTNOWHERE)

}  // namespace hud_display
}  // namespace ash

DEFINE_EXPORTED_UI_CLASS_PROPERTY_TYPE(ASH_EXPORT, HitTestCompat)
