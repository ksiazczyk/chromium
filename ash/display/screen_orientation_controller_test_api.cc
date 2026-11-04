// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ScreenOrientationController test API implementation
// summary: Implements the test API that exposes ScreenOrientationController internals such as rotation, lock state, and auto-rotation checks for use in tests.
// relations:
//   - implements /ash/display/screen_orientation_controller_test_api.h
//   - depends_on /ash/display/screen_orientation_controller.h
// ---

#include "ash/display/screen_orientation_controller_test_api.h"

#include "ash/display/screen_orientation_controller.h"

namespace ash {

ScreenOrientationControllerTestApi::ScreenOrientationControllerTestApi(
    ScreenOrientationController* controller)
    : controller_(controller) {}

void ScreenOrientationControllerTestApi::SetDisplayRotation(
    display::Display::Rotation rotation,
    display::Display::RotationSource source,
    DisplayConfigurationController::RotationAnimation mode) {
  controller_->SetDisplayRotation(rotation, source, mode);
}

void ScreenOrientationControllerTestApi::SetRotationLocked(bool locked) {
  controller_->SetRotationLockedInternal(locked);
}

chromeos::OrientationType
ScreenOrientationControllerTestApi::UserLockedOrientation() const {
  return controller_->user_locked_orientation_;
}

chromeos::OrientationType
ScreenOrientationControllerTestApi::GetCurrentOrientation() const {
  return controller_->GetCurrentOrientation();
}

void ScreenOrientationControllerTestApi::UpdateNaturalOrientation() {
  controller_->UpdateNaturalOrientationForTest();
}

bool ScreenOrientationControllerTestApi::IsAutoRotationAllowed() const {
  return controller_->IsAutoRotationAllowed();
}

}  // namespace ash
