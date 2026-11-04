// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab switcher pane drawable properties
// summary: Defines the property keys for the tab switcher pane drawable model, namely tab count and show notification dot.
// ---

package org.chromium.chrome.browser.tasks.tab_management;

import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.modelutil.PropertyKey;
import org.chromium.ui.modelutil.PropertyModel.WritableBooleanPropertyKey;
import org.chromium.ui.modelutil.PropertyModel.WritableIntPropertyKey;

/** Properties for the {@link TabSwitcherDrawable} for the {@link TabSwitcherPane}. */
@NullMarked
public class TabSwitcherPaneDrawableProperties {
    public static final WritableIntPropertyKey TAB_COUNT = new WritableIntPropertyKey();

    public static final WritableBooleanPropertyKey SHOW_NOTIFICATION_DOT =
            new WritableBooleanPropertyKey();

    public static final PropertyKey[] ALL_KEYS =
            new PropertyKey[] {TAB_COUNT, SHOW_NOTIFICATION_DOT};
}
