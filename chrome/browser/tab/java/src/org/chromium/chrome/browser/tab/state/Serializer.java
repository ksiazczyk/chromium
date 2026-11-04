// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Serializer interface for persisted tab data
// summary: Interface for serializing PersistedTabData, with an optional preSerialize step that must run on the UI thread.
// ---

package org.chromium.chrome.browser.tab.state;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * Used for serializing {@link PersistedTabData}.
 * @param <T> Return type of {@link Serializer}
 */
@NullMarked
public interface Serializer<T> {
    /**
     * Acquires serialized {@link PersistedTabData}. Not all
     * {@link PersistedTabData} clients require a pre-serialization
     * step but if they do, get() assumes preSerialize() has been called
     * Must be called from a background thread.
     */
    @Nullable T get();

    /** Prepares data for serialization. Must be called from the UI thread. */
    default void preSerialize() {}
}
