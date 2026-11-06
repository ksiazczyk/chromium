// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Safety Check Magic Stack preferences header
// summary: Declares functions to check whether the Safety Check Magic Stack module is disabled and to disable it via preferences.
// ---

#ifndef IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_MODEL_SAFETY_CHECK_PREFS_H_
#define IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_MODEL_SAFETY_CHECK_PREFS_H_

class PrefRegistrySimple;
class PrefService;

namespace safety_check_prefs {

// Returns `true` if Safety Check has been disabled by the user.
bool IsSafetyCheckInMagicStackDisabled(PrefService* prefs);

// Disables Safety Check.
void DisableSafetyCheckInMagicStack(PrefService* prefs);

}  // namespace safety_check_prefs

#endif  // IOS_CHROME_BROWSER_CONTENT_SUGGESTIONS_SAFETY_CHECK_MODEL_SAFETY_CHECK_PREFS_H_
