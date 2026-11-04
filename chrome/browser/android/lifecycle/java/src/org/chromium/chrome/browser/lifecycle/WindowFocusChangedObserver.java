// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowFocusChangedObserver interface
// summary: Observer interface registered with ActivityLifecycleDispatcher to receive callbacks when the activity window gains or loses focus.
// ---

package org.chromium.chrome.browser.lifecycle;

import org.chromium.build.annotations.NullMarked;

/**
 * Implement this interface and register in {@link ActivityLifecycleDispatcher} to receive
 * onWindowFocusChange events.
 */
@NullMarked
public interface WindowFocusChangedObserver extends LifecycleObserver {
    /** Called when the current Window of the activity gains or loses focus. */
    void onWindowFocusChanged(boolean hasFocus);
}
