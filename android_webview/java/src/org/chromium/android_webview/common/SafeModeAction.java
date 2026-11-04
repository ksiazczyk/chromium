// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SafeMode action base class
// summary: Abstract base class defining a WebView SafeMode precaution, tracking enabled state and providing an identifier and a Java-only startup execution hook.
// ---

package org.chromium.android_webview.common;

import org.chromium.build.annotations.NullMarked;

/** An interface for defining a precaution WebView may take during SafeMode. */
@NullMarked
public abstract class SafeModeAction {
    private boolean mIsEnabled;

    public final void enable() {
        mIsEnabled = true;
    }

    /**
     * This should only be used by the non-embedded process which keeps track of enabled actions
     * separately to the model used by embedded WebView.
     */
    public final void disable() {
        mIsEnabled = false;
    }

    public final boolean isEnabled() {
        return mIsEnabled;
    }

    /**
     * Returns a unique identifier for this action. This must not be used by any other registered
     * action.
     */
    public abstract String getId();

    /**
     * Executes the given action. Implementations of this method should be Java-only (no JNI/C++)
     * because the native library may not yet be loaded. The return status is used for logging
     * purposes only.
     *
     * @return {@code true} if the action succeeded, {@code false} otherwise.
     */
    public boolean executeAtStartup() {
        return true;
    }
}
