// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EphemeralTabObserver
// summary: Observer interface with default methods for ephemeral tab events such as toolbar creation, navigation, title changes, and web contents destruction.
// ---

package org.chromium.chrome.browser.ephemeraltab;

import android.view.ViewGroup;

import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.NavigationHandle;
import org.chromium.content_public.browser.WebContents;
import org.chromium.url.GURL;

/** An Observer that gets notified on Ephemeral Tab events. */
@NullMarked
public interface EphemeralTabObserver {
    default void onToolbarCreated(ViewGroup toolbarView) {}

    default void onNavigationStarted(NavigationHandle navigation) {}

    default void onNavigationFinished(GURL clickedUrl) {}

    default void onTitleSet(EphemeralTabSheetContent sheetContent, String title) {}

    default void onWebContentsObservationStarted(WebContents webContents) {}

    default void onWebContentsDestroyed() {}
}
