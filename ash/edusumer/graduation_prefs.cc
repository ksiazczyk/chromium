// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Graduation preferences registration
// summary: Registers profile preferences for graduation enablement status and nudge shown count and time.
// relations:
//   - depends_on /ash/edusumer/graduation_prefs.h
//   - depends_on /ash/constants/ash_pref_names.h
//   - depends_on /base/time/time.h
// ---

#include "ash/edusumer/graduation_prefs.h"

#include "ash/constants/ash_pref_names.h"
#include "base/time/time.h"
#include "components/prefs/pref_registry_simple.h"

namespace ash::graduation_prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterDictionaryPref(prefs::kGraduationEnablementStatus);
  registry->RegisterIntegerPref(prefs::kGraduationNudgeShownCount,
                                /*default_value=*/0);
  registry->RegisterTimePref(prefs::kGraduationNudgeLastShownTime,
                             base::Time());

  // TODO(b:374164026): Clean up this deprecated pref.
  registry->RegisterBooleanPref(prefs::kGraduationNudgeShownDeprecated, false);
}

}  // namespace ash::graduation_prefs
