// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura accessibility window property definitions
// summary: Defines accessibility-related Aura window property keys, including the child AX tree ID, an AX role override, and a flag to treat a window as invisible.
// ---

#include "ui/accessibility/aura/aura_window_properties.h"

#include "ui/accessibility/ax_enums.mojom.h"
#include "ui/accessibility/ax_tree_id.h"
#include "ui/base/class_property.h"

DEFINE_EXPORTED_UI_CLASS_PROPERTY_TYPE(AX_EXPORT, ax::mojom::Role)

namespace ui {

DEFINE_OWNED_UI_CLASS_PROPERTY_KEY(std::string, kChildAXTreeID)

DEFINE_UI_CLASS_PROPERTY_KEY(ax::mojom::Role,
                             kAXRoleOverride,
                             ax::mojom::Role::kNone)

DEFINE_UI_CLASS_PROPERTY_KEY(bool, kAXConsiderInvisibleAndIgnoreChildren, false)

}  // namespace ui
