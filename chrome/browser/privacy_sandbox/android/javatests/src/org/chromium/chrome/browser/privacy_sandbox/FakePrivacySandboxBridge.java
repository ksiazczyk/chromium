// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake Privacy Sandbox Bridge for tests
// summary: Fake Java implementation of the PrivacySandboxBridge natives providing stubbed related website sets behavior for tests.
// ---

package org.chromium.chrome.browser.privacy_sandbox;

import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.profiles.Profile;

/** Java implementation of PrivacySandboxBridge for testing. */
public class FakePrivacySandboxBridge implements PrivacySandboxBridge.Natives {
    private boolean mIsRwsManaged /* = false*/;

    @Override
    public boolean isRelatedWebsiteSetsDataAccessEnabled(Profile profile) {
        return true;
    }

    @Override
    public boolean isRelatedWebsiteSetsDataAccessManaged(Profile profile) {
        return false;
    }

    @Override
    public boolean isPartOfManagedRelatedWebsiteSet(Profile profile, String origin) {
        return mIsRwsManaged;
    }

    @Override
    public void setRelatedWebsiteSetsDataAccessEnabled(Profile profile, boolean enabled) {}

    @Override
    public @Nullable String getRelatedWebsiteSetOwner(Profile profile, String memberOrigin) {
        return null;
    }

    public void setIsRwsManaged(boolean managed) {
        mIsRwsManaged = managed;
    }
}
