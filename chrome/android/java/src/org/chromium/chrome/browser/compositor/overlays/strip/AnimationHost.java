// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AnimationHost interface for tab strip animations
// summary: Interface that hosts tab strip animations, providing methods to start, queue, and finish compositor animations and push tab updates.
// ---

package org.chromium.chrome.browser.compositor.overlays.strip;

import android.animation.Animator;
import android.animation.Animator.AnimatorListener;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.layouts.animation.CompositorAnimationHandler;
import org.chromium.chrome.browser.tabmodel.TabModel;

import java.util.List;

/** Host for animations in the tab strip. */
@NullMarked
public interface AnimationHost {
    /** Returns the {@link CompositorAnimationHandler} associated with this animation host. */
    CompositorAnimationHandler getAnimationHandler();

    /** Finishes any outstanding animations. */
    void finishAnimations();

    /**
     * Finishes any outstanding animations and propagates any related changes to the {@link
     * TabModel}.
     */
    void finishAnimationsAndPushTabUpdates();

    /**
     * Starts a given list of animations.
     *
     * @param animationList The {@link Animator} list to start. Nullable to allow for listeners to
     *     correctly resolve, even when no animation will actually run.
     * @param listener The {@link AnimatorListener} for the given animations.
     */
    void startAnimations(
            @Nullable List<Animator> animationList, @Nullable AnimatorListener listener);

    /**
     * Queues a given list of animations. Started and finished if {@link #finishAnimations} is
     * called. Otherwise, started when the next tab strip update occurs.
     *
     * @param animationList The {@link Animator} list to start. Nullable to allow for listeners to
     *     correctly resolve, even when no animation will actually run.
     * @param listener The {@link AnimatorListener} for the given animations.
     */
    void queueAnimations(
            @Nullable List<Animator> animationList, @Nullable AnimatorListener listener);
}
