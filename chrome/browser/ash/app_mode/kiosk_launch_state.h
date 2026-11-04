// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Kiosk launch state enum
// summary: Declares the KioskLaunchState enum and helpers to record the current kiosk launch phase as a crash key.
// ---

#ifndef CHROME_BROWSER_ASH_APP_MODE_KIOSK_LAUNCH_STATE_H_
#define CHROME_BROWSER_ASH_APP_MODE_KIOSK_LAUNCH_STATE_H_

#include <string>

namespace ash {

extern const char kKioskLaunchStateCrashKey[];

// Kiosk launch state for crash key.
enum class KioskLaunchState {
  kAttemptToLaunch,
  kStartLaunch,
  kLauncherStarted,
  kLaunchFailed,
  kAppWindowCreated,
};

std::string KioskLaunchStateToString(KioskLaunchState state);

void SetKioskLaunchStateCrashKey(KioskLaunchState state);

}  // namespace ash

#endif  // CHROME_BROWSER_ASH_APP_MODE_KIOSK_LAUNCH_STATE_H_
