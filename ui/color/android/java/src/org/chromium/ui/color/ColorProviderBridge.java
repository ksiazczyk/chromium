// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ColorProviderBridge interface for resolving Material3 theme colors
// summary: Java interface for resolving Material3 theme dynamic colors, implemented in chrome/android where R.attr values are compiled constants.
// ---

package org.chromium.ui.color;

import android.content.Context;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * Interface for resolving Material3 theme dynamic colors. Implemented in chrome/android where
 * R.attr values are compiled constants.
 */
@NullMarked
public interface ColorProviderBridge {
    long[] getThemeColors(@Nullable Context context);
}
