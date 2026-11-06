// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AXMode Mojom traits header
// summary: Declares Mojo StructTraits mapping ui::AXMode flags and filter flags to the ax.mojom AXMode message.
// ---

#ifndef UI_ACCESSIBILITY_MOJOM_AX_MODE_MOJOM_TRAITS_H_
#define UI_ACCESSIBILITY_MOJOM_AX_MODE_MOJOM_TRAITS_H_

#include "ui/accessibility/ax_mode.h"
#include "ui/accessibility/mojom/ax_mode.mojom-shared.h"

namespace mojo {

template <>
struct StructTraits<ax::mojom::AXModeDataView, ui::AXMode> {
  static uint32_t flags(const ui::AXMode& p) { return p.flags(); }
  static uint32_t filter_flags(const ui::AXMode& p) { return p.filter_flags(); }

  static bool Read(ax::mojom::AXModeDataView data, ui::AXMode* out);
};

}  // namespace mojo

#endif  // UI_ACCESSIBILITY_MOJOM_AX_MODE_MOJOM_TRAITS_H_
