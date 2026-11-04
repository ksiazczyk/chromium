// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile shortcut manager base implementation
// summary: Provides the base ProfileShortcutManager destructor and a default check that profile shortcuts can be created.
// ---

#include "chrome/browser/profiles/profile_shortcut_manager.h"

ProfileShortcutManager::~ProfileShortcutManager() = default;

ProfileShortcutManager::ProfileShortcutManager() = default;

bool ProfileShortcutManager::CanCreateProfileShortcut(
    const base::FilePath& profile_path) {
  return true;
}
