// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabHidingType annotation for tab hiding reasons
// summary: Defines an IntDef annotation enumerating the reasons a tab can be hidden, such as tab switch, activity hiding, reparenting or showing the tab switcher.
// ---

package org.chromium.chrome.browser.tab;

import androidx.annotation.IntDef;

import org.chromium.build.annotations.NullMarked;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    TabHidingType.CHANGED_TABS,
    TabHidingType.ACTIVITY_HIDDEN,
    TabHidingType.REPARENTED,
    TabHidingType.TAB_SWITCHER_SHOWN
})
@Retention(RetentionPolicy.SOURCE)
@NullMarked
public @interface TabHidingType {
    /** A tab was hidden due to other tab getting foreground. */
    int CHANGED_TABS = 0;

    /** A tab was hidden together with an activity. */
    int ACTIVITY_HIDDEN = 1;

    /** A tab was hidden while being reparented to a new activity. */
    int REPARENTED = 2;

    /** A tab was hidden while tab switcher was shown. */
    int TAB_SWITCHER_SHOWN = 3;
}
