// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped animation disabler implementation
// summary: Implements ScopedAnimationDisabler, a RAII helper that temporarily disables animations on an aura window while window state changes are performed.
// ---

#include "ui/wm/core/scoped_animation_disabler.h"

#include "ui/aura/client/aura_constants.h"
#include "ui/aura/window.h"
#include "ui/base/class_property.h"

namespace wm {

ScopedAnimationDisabler::ScopedAnimationDisabler(aura::Window* window)
    : window_(window->GetWeakPtrAsWindow()) {
  was_animation_enabled_ =
      !window_->GetProperty(aura::client::kAnimationsDisabledKey);
  if (was_animation_enabled_) {
    window_->SetProperty(aura::client::kAnimationsDisabledKey, true);
  }
}

ScopedAnimationDisabler::~ScopedAnimationDisabler() {
  if (window_ && was_animation_enabled_) {
    DCHECK_EQ(window_->GetProperty(aura::client::kAnimationsDisabledKey), true);
    window_->ClearProperty(aura::client::kAnimationsDisabledKey);
  }
}

}  // namespace wm
