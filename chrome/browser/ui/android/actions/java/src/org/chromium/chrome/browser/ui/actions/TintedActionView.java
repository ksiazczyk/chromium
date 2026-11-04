// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TintedActionView
// summary: Java interface for Android views that manage and provide their own default icon tint via getIconTint().
// ---

package org.chromium.chrome.browser.ui.actions;

import android.content.res.ColorStateList;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Interface for views that manage and provide their own default icon tint. */
@NullMarked
public interface TintedActionView {
    /** Returns the default icon tint for this view. */
    @Nullable ColorStateList getIconTint();
}
