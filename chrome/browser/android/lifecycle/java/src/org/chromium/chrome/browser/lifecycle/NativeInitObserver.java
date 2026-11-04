// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NativeInitObserver interface
// summary: Observer interface registered with the ActivityLifecycleDispatcher to be notified when the native library has finished loading.
// ---

package org.chromium.chrome.browser.lifecycle;

import org.chromium.build.annotations.NullMarked;

/**
 * Implement this interface and register in {@link ActivityLifecycleDispatcher} to get notified of
 * native having been loaded.
 */
@NullMarked
public interface NativeInitObserver extends LifecycleObserver {
    /** Called when the native library has finished loading. */
    void onFinishNativeInitialization();
}
