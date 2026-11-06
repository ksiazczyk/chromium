// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AX enum test utility header
// summary: Declares StringToIntListAttribute, a helper that converts an attribute name string into an IntListAttribute enum value.
// ---

#ifndef UI_ACCESSIBILITY_AX_ENUM_TEST_UTIL_H_
#define UI_ACCESSIBILITY_AX_ENUM_TEST_UTIL_H_

#include <string>

#include "ui/accessibility/ax_enums.mojom-forward.h"

namespace ui {

// ax::mojom::IntListAttribute
ax::mojom::IntListAttribute StringToIntListAttribute(
    const std::string& int_list_attribute);

}  // namespace ui

#endif  // UI_ACCESSIBILITY_AX_ENUM_TEST_UTIL_H_
