// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ProfileDependentSetting interface
// summary: Interface marking settings entries that depend on the currently selected profile and receive it via setProfile.
// ---

package org.chromium.chrome.browser.settings;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.profiles.Profile;

/** Specifies that this settings entry is dependent on the current profile. */
@NullMarked
public interface ProfileDependentSetting {
    /**
     * @param profile The currently selected profile.
     */
    void setProfile(Profile profile);
}
