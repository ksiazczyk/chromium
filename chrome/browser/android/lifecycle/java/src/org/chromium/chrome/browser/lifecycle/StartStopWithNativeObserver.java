// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StartStopWithNativeObserver interface
// summary: Observer interface for activity start and stop callbacks that are delivered only once native is initialized.
// ---

package org.chromium.chrome.browser.lifecycle;

import org.chromium.build.annotations.NullMarked;

/**
 * Implement this interface and register in {@link ActivityLifecycleDispatcher} to receive start and
 * stop with native events.
 */
@NullMarked
public interface StartStopWithNativeObserver extends LifecycleObserver {
    /**
     * Called when activity is started, provided that native is initialized.
     * If native is not initialized at that point, the call is postponed until it is.
     */
    void onStartWithNative();

    /** Similar to {@link #onStartWithNative}, but for the stop event. */
    void onStopWithNative();
}
