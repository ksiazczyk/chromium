// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Callback interface for clicks with meta state
// summary: Defines a functional interface that delivers the meta key and mouse button state captured at the time of a click.
// ---

package org.chromium.ui.util;

import org.chromium.build.annotations.NullMarked;

/** A callback used to pass meta state information from the time of click. */
@NullMarked
@FunctionalInterface
public interface ClickWithMetaStateCallback {
    /**
     * Called when a click occurs.
     *
     * @param metaState The meta key state at the time.
     * @param buttonState The mouse button state.
     */
    void onClickWithMeta(int metaState, int buttonState);
}
