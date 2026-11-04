// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AccessibilityAnimationOneShot implementation
// summary: Implements a one-shot compositor animation observer that runs a callback each animation step until the callback reports the animation is finished.
// relations:
//   - implements /ash/accessibility/ui/accessibility_animation_one_shot.h
//   - depends_on /ash/accessibility/ui/accessibility_animation_one_shot.h
//   - depends_on /ash/shell.h
// ---

#include "ash/accessibility/ui/accessibility_animation_one_shot.h"

#include "ash/shell.h"
#include "ui/compositor/compositor.h"
#include "ui/compositor/layer.h"
#include "ui/display/display.h"
#include "ui/display/screen.h"

namespace ash {

AccessibilityAnimationOneShot::AccessibilityAnimationOneShot(
    const gfx::Rect& bounds_in_dip,
    base::RepeatingCallback<bool(base::TimeTicks)> callback)
    : callback_(callback) {
  display::Display display =
      display::Screen::Get()->GetDisplayMatching(bounds_in_dip);
  aura::Window* root_window = Shell::GetRootWindowForDisplayId(display.id());
  if (!root_window) {
    // `root_window` can be invalid in some scenarios e.g. if an external
    // display is unplugged or disconnected.
    return;
  }

  ui::Compositor* compositor = root_window->layer()->GetCompositor();
  animation_observation_.Observe(compositor);
}

AccessibilityAnimationOneShot::~AccessibilityAnimationOneShot() = default;

void AccessibilityAnimationOneShot::OnAnimationStep(base::TimeTicks timestamp) {
  if (callback_.Run(timestamp))
    animation_observation_.Reset();
}

void AccessibilityAnimationOneShot::OnCompositingShuttingDown(
    ui::Compositor* compositor) {
  if (compositor && animation_observation_.IsObservingSource(compositor))
    animation_observation_.Reset();
}

}  // namespace ash
