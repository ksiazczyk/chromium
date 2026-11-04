// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Kiosk test helper implementation
// summary: Implements static helpers that temporarily set kiosk launch test overrides, such as skipping the splash screen wait, blocking app launch, and blocking exit on failure.
// ---

#include "chrome/browser/ash/app_mode/kiosk_test_helper.h"

#include "base/auto_reset.h"
#include "chrome/browser/ash/login/app_mode/kiosk_launch_controller.h"

namespace ash {

KioskTestHelper::KioskTestHelper() = default;
KioskTestHelper::~KioskTestHelper() = default;

// static
base::AutoReset<bool> KioskTestHelper::SkipSplashScreenWait() {
  return base::AutoReset<bool>(
      &KioskLaunchController::TestOverrides::skip_splash_wait, true);
}

// static
base::AutoReset<bool> KioskTestHelper::BlockAppLaunch() {
  return base::AutoReset<bool>(
      &KioskLaunchController::TestOverrides::block_app_launch, true);
}

// static
base::AutoReset<bool> KioskTestHelper::BlockExitOnFailure() {
  return base::AutoReset<bool>(
      &KioskLaunchController::TestOverrides::block_exit_on_failure, true);
}

}  // namespace ash
