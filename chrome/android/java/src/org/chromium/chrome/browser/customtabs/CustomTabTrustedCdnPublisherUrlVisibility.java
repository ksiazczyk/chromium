// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Custom tab trusted CDN publisher URL visibility
// summary: Implements TrustedCdn.PublisherUrlVisibility to control whether a trusted CDN publisher URL can be shown when a tab is attached to a custom tab activity.
// ---

package org.chromium.chrome.browser.customtabs;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.lifecycle.ActivityLifecycleDispatcher;
import org.chromium.chrome.browser.lifecycle.DestroyObserver;
import org.chromium.chrome.browser.tab.Tab;
import org.chromium.chrome.browser.tab.TrustedCdn.PublisherUrlVisibility;
import org.chromium.ui.base.WindowAndroid;

import java.util.function.BooleanSupplier;

/**
 * Implementation of {@link TrustedCdn.PublisherUrlVisibility} to provide Tab with the availability
 * of publisher URL of trusted CDN when attached to a custom tab activity.
 */
@NullMarked
class CustomTabTrustedCdnPublisherUrlVisibility implements PublisherUrlVisibility, DestroyObserver {
    private @Nullable WindowAndroid mWindowAndroid;
    private BooleanSupplier mIsPublisherPackageForSession;

    CustomTabTrustedCdnPublisherUrlVisibility(
            WindowAndroid windowAndroid,
            ActivityLifecycleDispatcher lifecycleDispatcher,
            BooleanSupplier isPublisherPackageForSession) {
        mWindowAndroid = windowAndroid;
        mIsPublisherPackageForSession = isPublisherPackageForSession;
        lifecycleDispatcher.register(this);
        PublisherUrlVisibility.attach(mWindowAndroid, this);
    }

    @Override
    public boolean canShowPublisherUrl(Tab tab) {
        return mIsPublisherPackageForSession.getAsBoolean();
    }

    @SuppressWarnings("NullAway")
    @Override
    public void onDestroy() {
        PublisherUrlVisibility.detach(this);
        mWindowAndroid = null;
        mIsPublisherPackageForSession = null;
    }
}
