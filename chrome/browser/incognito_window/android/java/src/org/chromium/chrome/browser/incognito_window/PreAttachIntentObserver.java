// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PreAttachIntentObserver interface
// summary: Defines an observer interface that receives intent data before the OS sets it in attach(), needed only for Android versions up to and including U (API 34).
// ---

package org.chromium.chrome.browser.incognito_window;

import android.content.Intent;

import org.chromium.build.annotations.NullMarked;

/**
 * An observer for receiving the intent data before it's set by the OS in #attach(). This is only
 * needed for Android versions up to and including U (API 34).
 */
@NullMarked
public interface PreAttachIntentObserver {
    /**
     * Called when the intent is available.
     *
     * @param intent The {@link Intent}.
     */
    void onPreAttachIntentAvailable(Intent intent);
}
