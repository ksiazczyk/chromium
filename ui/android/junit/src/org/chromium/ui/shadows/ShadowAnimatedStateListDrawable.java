// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Robolectric shadow for AnimatedStateListDrawable
// summary: Robolectric shadow extending ShadowStateListDrawable so addState accepts a state ID when testing AnimatedStateListDrawable in Android unit tests.
// ---

package org.chromium.ui.shadows;

import android.graphics.drawable.AnimatedStateListDrawable;
import android.graphics.drawable.Drawable;

import org.robolectric.annotation.Implements;
import org.robolectric.shadows.ShadowStateListDrawable;

@Implements(AnimatedStateListDrawable.class)
public class ShadowAnimatedStateListDrawable extends ShadowStateListDrawable {
    public void addState(int[] stateSet, Drawable drawable, int stateId) {
        addState(stateSet, drawable);
    }
}
