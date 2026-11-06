// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Headless mode prefs declarations
// summary: Declares the kHeadlessMode pref name constant and the RegisterPrefs function for headless mode policy prefs.
// ---

#ifndef COMPONENTS_HEADLESS_POLICY_HEADLESS_MODE_PREFS_H_
#define COMPONENTS_HEADLESS_POLICY_HEADLESS_MODE_PREFS_H_

class PrefRegistrySimple;

namespace headless {

namespace prefs {
extern const char kHeadlessMode[];
}

// Registers headless mode policy prefs in |registry|.
void RegisterPrefs(PrefRegistrySimple* registry);

}  // namespace headless

#endif  // COMPONENTS_HEADLESS_POLICY_HEADLESS_MODE_PREFS_H_
