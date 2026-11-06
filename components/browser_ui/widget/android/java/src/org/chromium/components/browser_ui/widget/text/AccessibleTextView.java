// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AccessibleTextView
// summary: A TextView subclass that overrides accessibility event and node info initialization so the view is announced as a Button for accessibility purposes.
// ---

package org.chromium.components.browser_ui.widget.text;

import android.content.Context;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.Button;
import android.widget.TextView;

import org.chromium.build.annotations.NullMarked;

/** Fake Button class, used so TextViews can announce themselves as Buttons, for accessibility. */
@NullMarked
public class AccessibleTextView extends TextView {
    public AccessibleTextView(Context context) {
        super(context);
    }

    @Override
    public void onInitializeAccessibilityEvent(AccessibilityEvent event) {
        super.onInitializeAccessibilityEvent(event);
        event.setClassName(Button.class.getName());
    }

    @Override
    public void onInitializeAccessibilityNodeInfo(AccessibilityNodeInfo info) {
        super.onInitializeAccessibilityNodeInfo(info);
        info.setClassName(Button.class.getName());
    }
}
