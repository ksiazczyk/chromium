// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DrawableFadeInAnimatorFactory for drawable fade-in
// summary: Factory that builds a value animator fading a drawable's alpha in from 0 to 255.
// ---

package org.chromium.ui.animation;

import android.animation.Animator;
import android.animation.ValueAnimator;
import android.graphics.drawable.Drawable;

import org.chromium.build.annotations.NullMarked;

/** Factory class for creating fade in animations for {@link Drawable} elements. */
@NullMarked
public class DrawableFadeInAnimatorFactory {
    /**
     * Creates an animation for fading a {@link Drawable} element in.
     *
     * @param drawable The {@link Drawable} to be faded in.
     */
    public static Animator build(Drawable drawable) {
        ValueAnimator animator = ValueAnimator.ofFloat(0, 1);
        animator.addUpdateListener(
                animation -> {
                    float fraction = animation.getAnimatedFraction();
                    drawable.setAlpha((int) (255 * fraction));
                });
        return animator;
    }
}
