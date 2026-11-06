// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Simple PrefService helper platform stubs
// summary: Provides empty default implementations of the platform-specific preference registration and prefs-loaded callbacks for PrefServiceHelper.
// ---

#include "chromecast/browser/pref_service_helper.h"

namespace chromecast {
namespace shell {

void PrefServiceHelper::RegisterPlatformPrefs(PrefRegistrySimple* registry) {
}

void PrefServiceHelper::OnPrefsLoaded(PrefService* pref_service) {
}

}  // namespace shell
}  // namespace chromecast
