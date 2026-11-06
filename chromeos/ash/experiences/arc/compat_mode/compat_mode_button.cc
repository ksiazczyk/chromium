// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compat mode button implementation
// summary: Implements the frame center button that notifies its controller on mouse presses and tap-down gestures.
// ---

#include "chromeos/ash/experiences/arc/compat_mode/compat_mode_button.h"

#include "chromeos/ash/experiences/arc/compat_mode/compat_mode_button_controller.h"

namespace arc {

CompatModeButton::CompatModeButton(CompatModeButtonController* controller,
                                   PressedCallback callback)
    : chromeos::FrameCenterButton(std::move(callback)),
      controller_(controller) {}

bool CompatModeButton::OnMousePressed(const ui::MouseEvent& event) {
  controller_->OnButtonPressed();
  return chromeos::FrameCenterButton::OnMousePressed(event);
}

void CompatModeButton::OnGestureEvent(ui::GestureEvent* event) {
  if (event->type() == ui::EventType::kGestureTapDown) {
    controller_->OnButtonPressed();
  }
  chromeos::FrameCenterButton::OnGestureEvent(event);
}

}  // namespace arc
