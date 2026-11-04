// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura background mode notification stub
// summary: Platform stub that leaves the background client installed notification unimplemented on Aura-based platforms.
// ---

#include "base/notimplemented.h"
#include "chrome/browser/background/extensions/background_mode_manager.h"

// No background jobs for aura for now.

void BackgroundModeManager::DisplayClientInstalledNotification(
    const std::u16string& name) {
  NOTIMPLEMENTED();
}
