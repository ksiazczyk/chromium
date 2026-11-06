// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ViewProvider
// summary: Generic interface supporting asynchronous view inflation, with methods to start inflation and register callbacks that run once the view is loaded.
// ---

package org.chromium.ui;

import android.view.View;

import org.chromium.base.Callback;
import org.chromium.build.annotations.NullMarked;

/**
 * Interface to support asynchronous inflation of views.
 * @param <T> The view type.
 */
@NullMarked
public interface ViewProvider<T> {
    /** Starts inflating the view. */
    void inflate();

    /**
     * Add a callback that would be run (on the UI thread) once the {@link View} encapsulated by
     * this provider is inflated. The callback runs immediately (blocking) if the view has
     * already been inflated.
     */
    void whenLoaded(Callback<T> callback);
}
