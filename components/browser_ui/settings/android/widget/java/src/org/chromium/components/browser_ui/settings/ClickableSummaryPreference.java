// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Clickable summary preference for Android settings
// summary: Android preference that enables clickable links in its summary text by applying a link movement method to the summary view.
// ---

package org.chromium.components.browser_ui.settings;

import android.content.Context;
import android.text.method.LinkMovementMethod;
import android.util.AttributeSet;
import android.widget.TextView;

import androidx.preference.PreferenceViewHolder;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** A preference that enables clickable links in its summary text. */
@NullMarked
public class ClickableSummaryPreference extends ChromeBasePreference {
    public ClickableSummaryPreference(Context context, @Nullable AttributeSet attrs) {
        super(context, attrs);
    }

    @Override
    public void onBindViewHolder(PreferenceViewHolder holder) {
        super.onBindViewHolder(holder);
        TextView summaryView = (TextView) holder.findViewById(android.R.id.summary);
        if (summaryView != null) {
            summaryView.setMovementMethod(LinkMovementMethod.getInstance());
        }
    }
}
