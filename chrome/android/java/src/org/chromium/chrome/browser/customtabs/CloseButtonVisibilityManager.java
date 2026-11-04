// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Close button visibility manager
// summary: Tracks and applies the visibility state of the Custom Tab close button through the toolbar buttons coordinator.
// ---

package org.chromium.chrome.browser.customtabs;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.browserservices.intents.BrowserServicesIntentDataProvider;
import org.chromium.chrome.browser.customtabs.features.toolbar.CustomTabToolbarButtonsCoordinator;
import org.chromium.chrome.browser.toolbar.ToolbarManager;

/** Manages the visibility of the close button. */
@NullMarked
public class CloseButtonVisibilityManager {
    private @Nullable CustomTabToolbarButtonsCoordinator mToolbarButtonsCoordinator;
    private boolean mIsVisible;

    public CloseButtonVisibilityManager(BrowserServicesIntentDataProvider intentDataProvider) {
        mIsVisible = intentDataProvider.isCloseButtonEnabled();
    }

    public void setVisibility(boolean isVisible) {
        if (mIsVisible == isVisible) return;

        mIsVisible = isVisible;
        updateCloseButtonVisibility();
    }

    public void onToolbarInitialized(
            ToolbarManager toolbarManager,
            CustomTabToolbarButtonsCoordinator toolbarButtonsCoordinator) {
        mToolbarButtonsCoordinator = toolbarButtonsCoordinator;
        updateCloseButtonVisibility();
    }

    private void updateCloseButtonVisibility() {
        if (mToolbarButtonsCoordinator == null) return;

        mToolbarButtonsCoordinator.setCloseButtonVisible(mIsVisible);
    }
}
