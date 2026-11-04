// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UiElementType enum header
// summary: Defines the UiElementType enum of non-unique, CSS-class-like identifiers for VR UI elements plus a to-string helper.
// ---

#ifndef CHROME_BROWSER_VR_ELEMENTS_UI_ELEMENT_TYPE_H_
#define CHROME_BROWSER_VR_ELEMENTS_UI_ELEMENT_TYPE_H_

#include <string>

#include "chrome/browser/vr/vr_ui_export.h"

namespace vr {

// These identifiers serve as stable, semantic identifiers for UI elements.
// These are not unique, analogous to CSS classes.
// LINT.IfChange(UiElementType)
enum UiElementType {
  kTypeNone = 0,
  kTypeScaledDepthAdjuster,
  kTypePromptBackground,
  kTypePromptIcon,
  kTypePromptText,
  kTypeSpacer,

  // This must be last.
  kNumUiElementTypes,
};
// LINT.ThenChange(//chrome/browser/vr/elements/ui_element_type.vv:UiElementType)

VR_UI_EXPORT std::string UiElementTypeToString(UiElementType type);

}  // namespace vr

#endif  // CHROME_BROWSER_VR_ELEMENTS_UI_ELEMENT_TYPE_H_
