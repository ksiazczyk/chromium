// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Animator properties for the payment request UI
// summary: Defines an IntProperty that animates a drawable's alpha so ObjectAnimators can fade drawables in the payment UI.
// ---

package org.chromium.chrome.browser.payments.ui;

import android.graphics.drawable.Drawable;
import android.util.IntProperty;

import org.chromium.build.annotations.NullMarked;

/** Holds different {@link android.util.Property} types that can be used with ObjectAnimators. */
@NullMarked
class AnimatorProperties {
    static final IntProperty<Drawable> DRAWABLE_ALPHA_PROPERTY =
            new IntProperty<>("alpha") {
                @Override
                public Integer get(Drawable d) {
                    return d.getAlpha();
                }

                @Override
                public void setValue(Drawable d, int alpha) {
                    d.setAlpha(alpha);
                }
            };
}
