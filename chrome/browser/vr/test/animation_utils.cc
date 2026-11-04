// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: VR animation test utility implementation
// summary: Implements a helper that reports whether a VR UI element is animating the given target properties, for use in tests.
// ---

#include "chrome/browser/vr/test/animation_utils.h"

#include "chrome/browser/vr/elements/ui_element.h"
#include "ui/gfx/animation/keyframe/test/animation_utils.h"

namespace vr {

bool IsAnimating(UiElement* element,
                 const std::vector<TargetProperty>& properties) {
  for (auto property : properties) {
    if (!element->IsAnimatingProperty(property))
      return false;
  }
  return true;
}

}  // namespace vr
