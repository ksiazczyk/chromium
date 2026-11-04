// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DefaultPaneOrderController
// summary: Implements PaneOrderController with the default ordering of Hub panes such as tab switcher, history, and bookmarks.
// ---

package org.chromium.chrome.browser.hub;

import com.google.common.collect.ImmutableSet;

import org.chromium.build.annotations.NullMarked;

/** The default {@link PaneOrderController}. */
@NullMarked
public class DefaultPaneOrderController implements PaneOrderController {
    @Override
    public ImmutableSet<Integer> getPaneOrder() {
        return ImmutableSet.of(
                PaneId.TAB_SWITCHER,
                PaneId.INCOGNITO_TAB_SWITCHER,
                PaneId.TAB_GROUPS,
                PaneId.CROSS_DEVICE,
                PaneId.HISTORY,
                PaneId.BOOKMARKS);
    }
}
