// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ConfigurationChangedObserver interface
// summary: Observer interface registered with the ActivityLifecycleDispatcher to be notified when the activity configuration changes.
// ---

package org.chromium.chrome.browser.lifecycle;

import android.content.res.Configuration;

import org.chromium.build.annotations.NullMarked;

/**
 * Implement this interface and register in {@link ActivityLifecycleDispatcher} to be notified of
 * configuration changes.
 */
@NullMarked
public interface ConfigurationChangedObserver extends LifecycleObserver {
    /**
     * Called when the Activity configuration changes. See
     * {@link android.app.Activity#onConfigurationChanged(Configuration)}.
     */
    void onConfigurationChanged(Configuration newConfig);
}
