// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped accessibility override window setter implementation
// summary: Implements a scoped helper that updates the accessibility override window and clears it on destruction or window closing.
// relations:
//   - implements /ash/accessibility/scoped_a11y_override_window_setter.h
//   - depends_on /ash/accessibility/accessibility_controller.h
//   - depends_on /ash/shell.h
// ---

#include "ash/accessibility/scoped_a11y_override_window_setter.h"

#include "ash/accessibility/accessibility_controller.h"
#include "ash/shell.h"

namespace ash {

ScopedA11yOverrideWindowSetter::~ScopedA11yOverrideWindowSetter() {
  // `ScopedA11yOverrideWindowSetter` can be destructed while Shell is being
  // destroyed and therefore null.
  if (Shell::HasInstance())
    MaybeUpdateA11yOverrideWindow(nullptr);
}

void ScopedA11yOverrideWindowSetter::OnWindowDestroying(aura::Window* window) {
  MaybeUpdateA11yOverrideWindow(nullptr);
}

void ScopedA11yOverrideWindowSetter::MaybeUpdateA11yOverrideWindow(
    aura::Window* a11y_override_window) {
  DCHECK(Shell::HasInstance());
  if (current_a11y_override_window_ != a11y_override_window) {
    Shell::Get()->accessibility_controller()->SetA11yOverrideWindow(
        a11y_override_window);
    current_a11y_override_window_ = a11y_override_window;
  }
}

}  // namespace ash
