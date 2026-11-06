// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ZoomConstants
// summary: Holds constants for zooming web contents in and out, using the legacy term zoom for what Chrome calls the page scale factor.
// ---

package org.chromium.components.zoom;

import org.chromium.build.annotations.NullMarked;

/**
 * Holds all constants related zooming in/out WebContents.
 * <p>This class uses the term 'zoom' for legacy reasons, but relates
 * to what chrome calls the 'page scale factor'.
 */
@NullMarked
public class ZoomConstants {
    public static final float ZOOM_IN_DELTA = 1.25f;
    public static final float ZOOM_OUT_DELTA = .8f;
    public static final float ZOOM_RESET_DELTA = -1.f; // Negative value to reset zoom level.
}
