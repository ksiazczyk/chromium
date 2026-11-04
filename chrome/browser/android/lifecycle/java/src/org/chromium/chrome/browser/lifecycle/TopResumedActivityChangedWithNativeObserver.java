// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TopResumedActivityChangedWithNativeObserver interface
// summary: Observer interface for top-resumed-activity change callbacks intended for objects that require native initialization.
// ---

package org.chromium.chrome.browser.lifecycle;

import org.chromium.build.annotations.NullMarked;

/**
 * Observes {@code Activity#onTopResumedActivityChanged(boolean)} events for objects that need
 * native initialization.
 *
 * <p>Objects requiring native initialization should implement this interface instead of {@link
 * TopResumedActivityChangedObserver}, and register it with {@link ActivityLifecycleDispatcher}.
 *
 * <p>TODO(crbug.com/437381998): see if we can combine this interface and {@link
 * TopResumedActivityChangedObserver} into one.
 */
@NullMarked
public interface TopResumedActivityChangedWithNativeObserver extends LifecycleObserver {

    void onTopResumedActivityChangedWithNative(boolean isTopResumedActivity);
}
