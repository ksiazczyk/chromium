// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Profile shortcut manager stub implementation
// summary: Provides a no-op ProfileShortcutManager for platforms without shortcut support, disabling the feature and returning a null instance.
// ---

#include "chrome/browser/profiles/profile_shortcut_manager.h"

void ProfileShortcutManager::DisableForUnitTests() {}

// static
bool ProfileShortcutManager::IsFeatureEnabled() {
  return false;
}

// static
std::unique_ptr<ProfileShortcutManager> ProfileShortcutManager::Create(
    ProfileManager* manager) {
  return nullptr;
}
