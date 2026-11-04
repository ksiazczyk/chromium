// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Screen AI preference names header
// summary: Declares the Screen AI last-used-time preference name and the local state preference registration function.
// ---

#ifndef CHROME_BROWSER_SCREEN_AI_PREF_NAMES_H_
#define CHROME_BROWSER_SCREEN_AI_PREF_NAMES_H_

class PrefRegistrySimple;

namespace prefs {

// The last time Screen AI library was used.
extern const char kScreenAILastUsedTimePrefName[];

}  // namespace prefs

namespace screen_ai {

// Call once by the browser process to register Screen AI preferences.
void RegisterLocalStatePrefs(PrefRegistrySimple* registry);

}  // namespace screen_ai

#endif  // CHROME_BROWSER_SCREEN_AI_PREF_NAMES_H_
