// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SurfaceScope interface providing renderers with shared dependencies
// summary: Interface that provides list and surface renderers sharing the same dependencies, plus methods to replace and remove data store entries for a surface.
// ---

package org.chromium.chrome.browser.xsurface;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

/**
 * Implemented internally.
 *
 * Provides multiple types of renderers to surfaces that want to render an
 * external surface. Each renderer will reuse the same dependencies (hence
 * "Scope") but each call to provideFoo will return a new renderer, so that a
 * single surface can support multiple rendered views.
 */
@NullMarked
public interface SurfaceScope {
    HybridListRenderer provideListRenderer();

    default @Nullable SurfaceRenderer provideSurfaceRenderer() {
        return null;
    }

    default void replaceDataStoreEntry(String key, byte[] data) {}

    default void removeDataStoreEntry(String key) {}
}
