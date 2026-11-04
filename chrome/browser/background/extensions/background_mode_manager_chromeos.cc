// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeOS background mode notification stub
// summary: ChromeOS-specific implementation that omits the client installed notification because extensions run continuously on ChromeOS.
// ---

#include "chrome/browser/background/extensions/background_mode_manager.h"

void BackgroundModeManager::DisplayClientInstalledNotification(
    const std::u16string& name) {
  // No need to display anything on ChromeOS because all extensions run all
  // the time anyway.
}
