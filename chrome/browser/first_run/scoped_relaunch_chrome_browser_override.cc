// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped override of the Chrome relaunch callback for tests
// summary: Implements a scoped helper that swaps the Chrome relaunch callback for a test-provided one and restores the previous callback on destruction.
// ---

#include "chrome/browser/first_run/scoped_relaunch_chrome_browser_override.h"

#include <utility>

namespace upgrade_util {

ScopedRelaunchChromeBrowserOverride::ScopedRelaunchChromeBrowserOverride(
    RelaunchChromeBrowserCallback callback)
    : previous_(
          SetRelaunchChromeBrowserCallbackForTesting(std::move(callback))) {}

ScopedRelaunchChromeBrowserOverride::~ScopedRelaunchChromeBrowserOverride() {
  SetRelaunchChromeBrowserCallbackForTesting(std::move(previous_));
}

}  // namespace upgrade_util
