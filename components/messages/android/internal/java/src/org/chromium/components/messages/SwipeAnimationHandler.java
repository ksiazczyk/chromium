// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SwipeAnimationHandler
// summary: Interface for handling swipe gestures on message banners, with callbacks for swipe start, swipe end, and whether the swipe gesture is enabled.
// ---

package org.chromium.components.messages;

import android.animation.Animator;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Handler to prepare and trigger swiping animation of {@link MessageStateHandler}. */
@NullMarked
public interface SwipeAnimationHandler {
    /** Should be called when swipe is started. */
    void onSwipeStart();

    /**
     * Should be called when swipe is finished.
     * @param animator The animator to trigger after swipe is finished. Set null if no animation
     *                 is required.
     */
    void onSwipeEnd(@Nullable Animator animator);

    /** @return Whether the message view should consume the swipe gesture. */
    boolean isSwipeEnabled();
}
