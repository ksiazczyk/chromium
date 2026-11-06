// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring GetSuggestionsFromGeminiPolicyState
// summary: Declares GetSuggestionsFromGeminiPolicyState, which returns the enterprise policy state for the Suggestions from Gemini settings page.
// ---

#ifndef IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_SUGGESTIONS_FROM_GEMINI_UTILS_SUGGESTIONS_FROM_GEMINI_UTILS_H_
#define IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_SUGGESTIONS_FROM_GEMINI_UTILS_SUGGESTIONS_FROM_GEMINI_UTILS_H_

#import "ios/chrome/browser/settings/autofill/suggestions_from_gemini/ui/suggestions_from_gemini_constants.h"

class PrefService;

// Returns the enterprise policy state for Suggestions from Gemini settings
// page.
SuggestionsFromGeminiPolicyState GetSuggestionsFromGeminiPolicyState(
    const PrefService* pref_service);

#endif  // IOS_CHROME_BROWSER_SETTINGS_AUTOFILL_SUGGESTIONS_FROM_GEMINI_UTILS_SUGGESTIONS_FROM_GEMINI_UTILS_H_
