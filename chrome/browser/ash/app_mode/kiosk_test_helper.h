// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Kiosk test helper header
// summary: Declares the KioskTestHelper class that changes kiosk behavior for testing purposes via scoped boolean overrides.
// ---

#ifndef CHROME_BROWSER_ASH_APP_MODE_KIOSK_TEST_HELPER_H_
#define CHROME_BROWSER_ASH_APP_MODE_KIOSK_TEST_HELPER_H_

#include "base/auto_reset.h"

namespace ash {

// Helper class that allows changing some behavior of the kiosk code for testing
// purposes.
class KioskTestHelper {
 public:
  KioskTestHelper();
  KioskTestHelper(const KioskTestHelper&) = delete;
  KioskTestHelper& operator=(const KioskTestHelper&) = delete;
  ~KioskTestHelper();

  [[nodiscard]] static base::AutoReset<bool> SkipSplashScreenWait();
  [[nodiscard]] static base::AutoReset<bool> BlockAppLaunch();
  [[nodiscard]] static base::AutoReset<bool> BlockExitOnFailure();
};

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_APP_MODE_KIOSK_TEST_HELPER_H_
