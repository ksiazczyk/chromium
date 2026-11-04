// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Incognito persistent prefs allowlist declarations
// summary: Declares GetIncognitoPersistentPrefsAllowlist, which returns the preference names stored in the user profile from incognito mode.
// ---

#ifndef CHROME_BROWSER_PREFS_PREF_SERVICE_INCOGNITO_ALLOWLIST_H_
#define CHROME_BROWSER_PREFS_PREF_SERVICE_INCOGNITO_ALLOWLIST_H_

#include <vector>

namespace prefs {

// Populate a list of all preferences that are stored in user profile in
// incognito mode.
// Please refer to the comments in .cc file.
std::vector<const char*> GetIncognitoPersistentPrefsAllowlist();

}  // namespace prefs

#endif  // CHROME_BROWSER_PREFS_PREF_SERVICE_INCOGNITO_ALLOWLIST_H_
