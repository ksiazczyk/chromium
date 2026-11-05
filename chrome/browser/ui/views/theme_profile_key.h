// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Theme profile key for aura windows
// summary: Declares functions to get and set the profile that determines the theme used for an aura window.
// ---

#ifndef CHROME_BROWSER_UI_VIEWS_THEME_PROFILE_KEY_H_
#define CHROME_BROWSER_UI_VIEWS_THEME_PROFILE_KEY_H_

namespace aura {
class Window;
}

class Profile;

void SetThemeProfileForWindow(aura::Window* window, Profile* profile);
Profile* GetThemeProfileForWindow(aura::Window*);

#endif  // CHROME_BROWSER_UI_VIEWS_THEME_PROFILE_KEY_H_
