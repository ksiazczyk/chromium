// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Cast session utility constants
// summary: Helper class defining constants shared by all Cast session types, such as the Cast media namespace and the minimum volume level delta.
// ---

package org.chromium.components.media_router;

import org.chromium.build.annotations.NullMarked;

/** Helper class that implements functions useful to all CastSession types. */
@NullMarked
public class CastSessionUtil {
    public static final String MEDIA_NAMESPACE = "urn:x-cast:com.google.cast.media";

    // The value is borrowed from the Android Cast SDK code to match their behavior.
    public static final double MIN_VOLUME_LEVEL_DELTA = 1e-7;
}
