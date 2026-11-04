// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Invert bubble user prefs header
// summary: Declares the function that registers invert bubble user preferences in the syncable pref registry.
// ---

#ifndef CHROME_BROWSER_ACCESSIBILITY_INVERT_BUBBLE_PREFS_H_
#define CHROME_BROWSER_ACCESSIBILITY_INVERT_BUBBLE_PREFS_H_

namespace user_prefs {
class PrefRegistrySyncable;
}

namespace accessibility_prefs {

void RegisterInvertBubbleUserPrefs(user_prefs::PrefRegistrySyncable* registry);

}  // namespace accessibility_prefs

#endif  // CHROME_BROWSER_ACCESSIBILITY_INVERT_BUBBLE_PREFS_H_
