// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContainedLinearLayout
// summary: A LinearLayout that can be styled by the ContainmentItemController, parsing background style and color from XML attributes.
// ---

package org.chromium.components.browser_ui.widget.containment;

import static org.chromium.components.browser_ui.widget.containment.ContainmentUiUtils.parseContainmentAttributes;

import android.content.Context;
import android.util.AttributeSet;
import android.widget.LinearLayout;

import androidx.annotation.ColorInt;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/**
 * A LinearLayout that can be styled by the {@link
 * org.chromium.components.browser_ui.widget.containment.ContainmentItemController}.
 */
@NullMarked
public class ContainedLinearLayout extends LinearLayout implements ContainmentItem {
    private final @BackgroundStyle int mBackgroundStyle;
    private final @ColorInt int mCustomBackgroundColor;

    /** Constructor for inflating from XML. */
    public ContainedLinearLayout(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);

        ContainmentUiUtils.ContainmentAttributes parsedAttrs =
                parseContainmentAttributes(context, attrs);
        mBackgroundStyle = parsedAttrs.backgroundStyle;
        mCustomBackgroundColor = parsedAttrs.backgroundColor;
    }

    @Override
    public @BackgroundStyle int getCustomBackgroundStyle() {
        return mBackgroundStyle;
    }

    @Override
    public int getCustomBackgroundColor() {
        return mCustomBackgroundColor;
    }
}
