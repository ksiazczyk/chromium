// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android Glic settings utility implementation
// summary: Android implementation that routes Glic settings navigation to Android settings pages and returns the _android help URL suffix.
// ---

#include "chrome/browser/glic/glic_settings_util.h"

#include <string>

#include "base/feature_list.h"
#include "base/notimplemented.h"
#include "chrome/browser/glic/android/glic_navigation_utils_android.h"
#include "components/password_manager/core/browser/features/password_features.h"

namespace glic {

void OpenGlicSettingsPage(Profile* profile) {
  ShowGlicSettings(GlicSettingsPage::kMain);
}

void OpenGlicOsToggleSetting(Profile* profile) {
  ShowGlicSettings(GlicSettingsPage::kMain);
}

void OpenGlicKeyboardShortcutSetting(Profile* profile) {
  ShowGlicSettings(GlicSettingsPage::kMain);
}

void OpenGlicLocationSetting(Profile* profile) {
  ShowGlicSettings(GlicSettingsPage::kMain, "location_permission");
}

void OpenPasswordManagerSettingsPage(Profile* profile) {
  if (base::FeatureList::IsEnabled(
          password_manager::features::kActorLoginPermissionsUi)) {
    ShowGlicSettings(GlicSettingsPage::kActorLoginPermissions);
  } else {
    NOTIMPLEMENTED();
  }
}

void OpenContactInfoSettingsPage(Profile* profile) {
  NOTIMPLEMENTED();
}

std::string_view GetPlatformHelpSuffix() {
  return "_android";
}

}  // namespace glic
