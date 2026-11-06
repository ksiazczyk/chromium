// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MediaSource interface for parsing Cast source URNs
// summary: Interface that abstracts parsing the Cast application id and other parameters from a media source URN, exposing route selector building and source/application ids.
// ---

package org.chromium.components.media_router;

import androidx.mediarouter.media.MediaRouteSelector;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Abstracts parsing the Cast application id and other parameters from the source URN. */
@NullMarked
public interface MediaSource {
    /**
     * Returns a new {@link MediaRouteSelector} to use for Cast device filtering for this particular
     * media source or null if the application id is invalid.
     *
     * @return an initialized route selector or null.
     */
    @Nullable MediaRouteSelector buildRouteSelector();

    /**
     * @return the Cast application id corresponding to the source.
     */
    String getApplicationId();

    /**
     * @return the id identifying the media source
     */
    String getSourceId();
}
