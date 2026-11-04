// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Power button screenshot controller test API
// summary: Provides a test API that fires the volume down and volume up timers of the power button screenshot controller to support testing.
// ---

#include "ash/system/power/power_button_screenshot_controller_test_api.h"

#include "ash/system/power/power_button_screenshot_controller.h"

namespace ash {

PowerButtonScreenshotControllerTestApi::PowerButtonScreenshotControllerTestApi(
    PowerButtonScreenshotController* controller)
    : controller_(controller) {
  DCHECK(controller_);
}

PowerButtonScreenshotControllerTestApi::
    ~PowerButtonScreenshotControllerTestApi() = default;

bool PowerButtonScreenshotControllerTestApi::TriggerVolumeDownTimer() {
  if (!controller_->volume_down_timer_.IsRunning())
    return false;

  controller_->volume_down_timer_.FireNow();
  return true;
}

bool PowerButtonScreenshotControllerTestApi::TriggerVolumeUpTimer() {
  if (!controller_->volume_up_timer_.IsRunning())
    return false;

  controller_->volume_up_timer_.FireNow();
  return true;
}

}  // namespace ash
