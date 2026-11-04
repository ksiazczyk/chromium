// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Hotspot icon API
// summary: Declares GetIconForHotspot, which returns the vector icon matching a given hotspot state.
// ---

#ifndef ASH_SYSTEM_HOTSPOT_HOTSPOT_ICON_H_
#define ASH_SYSTEM_HOTSPOT_HOTSPOT_ICON_H_

#include "ash/ash_export.h"
#include "chromeos/ash/services/hotspot_config/public/mojom/cros_hotspot_config.mojom-forward.h"

namespace gfx {
struct VectorIcon;
}  // namespace gfx

namespace ash::hotspot_icon {

// Get the hotspot icon for the given `hotspot_state`.
ASH_EXPORT const gfx::VectorIcon& GetIconForHotspot(
    const hotspot_config::mojom::HotspotState& hotspot_state);

}  // namespace ash::hotspot_icon

#endif  // ASH_SYSTEM_HOTSPOT_HOTSPOT_ICON_H_
