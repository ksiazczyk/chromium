// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Registration of the Enterprise Isolated Mode preference
// summary: Defines the enterprise.isolated_mode preference name and registers it with a default disabled value in the profile pref registry.
// ---

#include "components/enterprise/isolated_mode/prefs.h"

namespace enterprise_isolated_mode {

const char kEnterpriseIsolatedModeSettings[] = "enterprise.isolated_mode";

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterIntegerPref(
      kEnterpriseIsolatedModeSettings,
      static_cast<int>(IsolatedModeSetting::kDisabled));
}

}  // namespace enterprise_isolated_mode
