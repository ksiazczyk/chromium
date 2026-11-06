// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CookieControlsObserver callback interface
// summary: Interface for classes that want to receive cookie blocking status updates, enforcement level, and exception expiration from the CookieControlsBridge.
// ---

package org.chromium.components.content_settings;

import org.chromium.build.annotations.NullMarked;

/** Interface for a class that wants to receive cookie updates from CookieControlsBridge. */
@NullMarked
public interface CookieControlsObserver {
    /**
     * Called when the cookie blocking status for the current site changes.
     *
     * @param controlsState An enum indicating the state of the controls for the UI to change.
     * @param enforcement An enum indicating enforcement of cookie policies.
     * @param expiration Expiration of the cookie blocking exception.
     */
    default void onStatusChanged(
            @CookieControlsState int controlsState,
            @CookieControlsEnforcement int enforcement,
            long expiration) {}
}
