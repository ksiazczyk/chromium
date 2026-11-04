// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Help app profile preference registration
// summary: Registers help app profile preferences, including new device checklist completion, how-to page visits, and notification milestone, in the pref registry.
// ---

#include "ash/webui/help_app_ui/help_app_prefs.h"

#include "components/prefs/pref_registry_simple.h"

namespace ash::help_app::prefs {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(kHelpAppHasCompletedNewDeviceChecklist, false);
  registry->RegisterBooleanPref(kHelpAppHasVisitedHowToPage, false);
  registry->RegisterIntegerPref(kHelpAppNotificationLastShownMilestone, -10);
  registry->RegisterBooleanPref(kHelpAppShouldShowGetStarted, false);
  registry->RegisterBooleanPref(kHelpAppShouldShowParentalControl, false);
  registry->RegisterBooleanPref(kHelpAppTabletModeDuringOobe, false);
}

}  // namespace ash::help_app::prefs
