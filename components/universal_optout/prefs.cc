// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Universal Opt-Out preference registration (prefs.cc)
// summary: Registers the eligibility history dictionary and the eligible and enabled boolean profile preferences for Universal Opt Out.
// ---

#include "components/universal_optout/prefs.h"

#include "components/pref_registry/pref_registry_syncable.h"
#include "components/prefs/pref_registry_simple.h"

namespace universal_optout::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterDictionaryPref(prefs::kUniversalOptOutEligibilityHistory);
  registry->RegisterBooleanPref(prefs::kUniversalOptOutEligible, false);
  registry->RegisterBooleanPref(prefs::kUniversalOptOutEnabled, false);
}

}  // namespace universal_optout::prefs
