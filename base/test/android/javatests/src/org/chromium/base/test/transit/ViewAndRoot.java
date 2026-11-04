// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ViewAndRoot data class for a View and its root
// summary: Holds an Android View together with the Espresso Root in which it was found, as an internal data class for view matching.
// ---

package org.chromium.base.test.transit;

import android.view.View;

import androidx.test.espresso.Root;

/** A data class for {@link View} and the {@link Root} where it was found. */
class ViewAndRoot {
    public final View view;
    public final Root root;

    ViewAndRoot(View view, Root root) {
        this.view = view;
        this.root = root;
    }
}
