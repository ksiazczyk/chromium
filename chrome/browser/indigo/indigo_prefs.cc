// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Indigo preference registration
// summary: Registers the Indigo policy and onboarding profile preferences with the pref registry.
// ---

#include "chrome/browser/indigo/indigo_prefs.h"

#include "components/prefs/pref_registry_simple.h"

namespace indigo::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterIntegerPref(kIndigoPolicy, kAllowed);
  registry->RegisterBooleanPref(kIndigoHasOnboarded, false);
}

}  // namespace indigo::prefs
