// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PrefServiceUtil
// summary: Utility that creates a PrefChangeRegistrar watching the user prefs of a given profile.
// ---

package org.chromium.chrome.browser.preferences;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.components.prefs.PrefChangeRegistrar;
import org.chromium.components.user_prefs.UserPrefs;

/** Utilities for accessing PrefServices. */
@NullMarked
public class PrefServiceUtil {
    /** Create a PrefChangeRegistrar watching the UserPrefs of a Profile. */
    public static PrefChangeRegistrar createFor(Profile profile) {
        return new PrefChangeRegistrar(UserPrefs.get(profile.getOriginalProfile()));
    }
}
