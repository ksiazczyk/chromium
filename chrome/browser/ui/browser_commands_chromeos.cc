// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS browser commands implementation
// summary: Implements the TakeScreenshot command for ChromeOS by recording a user metric and capturing screenshots of all displays.
// ---

#include "chrome/browser/ui/browser_commands_chromeos.h"

#include "ash/public/cpp/capture_mode/capture_mode_api.h"
#include "base/metrics/user_metrics.h"
#include "base/metrics/user_metrics_action.h"

using base::UserMetricsAction;

void TakeScreenshot() {
  base::RecordAction(UserMetricsAction("Menu_Take_Screenshot"));
  ash::CaptureScreenshotsOfAllDisplays();
}
