// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS animation preference handling
// summary: Implements ChromeOS-specific rich animation rendering, scroll animation and reduced motion behavior for the Animation class.
// ---

#include "ui/gfx/animation/animation.h"

namespace gfx {

// This should only be used by the ChromeOS Accessibility system.
// static
void Animation::SetPrefersReducedMotionForA11y(bool prefers_reduced_motion) {
  prefers_reduced_motion_ = prefers_reduced_motion;
}

// static
bool Animation::ShouldRenderRichAnimationImpl() {
  if (prefers_reduced_motion_.has_value()) {
    return !prefers_reduced_motion_.value();
  }
  return true;
}

// static
bool Animation::ScrollAnimationsEnabledBySystem() {
  return ShouldRenderRichAnimation();
}

// static
void Animation::UpdatePrefersReducedMotion() {
  if (!prefers_reduced_motion_.has_value()) {
    prefers_reduced_motion_ = false;
  }
}

}  // namespace gfx
