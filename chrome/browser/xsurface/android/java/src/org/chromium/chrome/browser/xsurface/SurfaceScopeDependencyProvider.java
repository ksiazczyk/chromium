// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SurfaceScopeDependencyProvider interface for surface-level dependencies
// summary: Interface implemented in Chromium that provides surface-level dependencies such as the hosting activity, its context and dark mode state, and should only be called on the UI thread.
// ---

package org.chromium.chrome.browser.xsurface;

import android.app.Activity;
import android.content.Context;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

/**
 * Implemented in Chromium.
 *
 * Provides dependencies for xsurface at the surface level.
 *
 * Should only be called on the UI thread.
 */
@NullMarked
public interface SurfaceScopeDependencyProvider {
    /** Returns the activity. */
    default @Nullable Activity getActivity() {
        return null;
    }

    /** Returns the activity context hosting the surface. */
    default @Nullable Context getActivityContext() {
        return null;
    }

    /** Returns whether the activity is in darkmode or not */
    default boolean isDarkModeEnabled() {
        return false;
    }
}
