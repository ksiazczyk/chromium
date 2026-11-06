// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cobrowse eligibility utility functions
// summary: Declares helper functions that check whether AIM Cobrowse and its Web Selection Search feature are enabled and the user is eligible.
// ---

#ifndef IOS_CHROME_BROWSER_COBROWSE_MODEL_COBROWSE_UTIL_H_
#define IOS_CHROME_BROWSER_COBROWSE_MODEL_COBROWSE_UTIL_H_

class AimEligibilityService;
class PrefService;
class ProfileIOS;

// Returns true if AIM Cobrowse feature is enabled and the user is eligible for
// AIM and search content sharing.
bool IsAimCobrowseEligible(AimEligibilityService* aim_eligibility_service,
                           const PrefService* prefs);
bool IsAimCobrowseEligible(ProfileIOS* profile);

// Returns true if AIM Cobrowse Web Selection Search feature is enabled and the
// user is eligible for AIM Cobrowse.
bool IsAimCobrowseWebSelectionSearchEligible(
    AimEligibilityService* aim_eligibility_service,
    const PrefService* prefs);
bool IsAimCobrowseWebSelectionSearchEligible(ProfileIOS* profile);

#endif  // IOS_CHROME_BROWSER_COBROWSE_MODEL_COBROWSE_UTIL_H_
