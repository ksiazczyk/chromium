// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Supervised user settings test utilities
// summary: Test-only helper that sets preconditions for supervised user journeys, such as adding URLs to the blocklist and stubbing kids management API responses.
// ---

package org.chromium.chrome.browser.supervised_user;

import org.chromium.chrome.browser.profiles.Profile;

/** Utility class to be used only in tests to set preconditions for supervised user journeys */
class SupervisedUserSettingsTestUtils {
    /** Adds the given url to the the blocklist applied on the `profile` */
    static void addUrlToBlocklist(Profile profile, String url) {
        FamilyLinkSettingsTestBridge.setManualFilterForHost(profile, url, false);
    }

    /** Sets the kids management API response so that it blocks/allows the site */
    public static void setKidsManagementResponseForTesting(Profile profile, boolean isAllowed) {
        FamilyLinkSettingsTestBridge.setKidsManagementResponseForTesting(profile, isAllowed);
    }
}
