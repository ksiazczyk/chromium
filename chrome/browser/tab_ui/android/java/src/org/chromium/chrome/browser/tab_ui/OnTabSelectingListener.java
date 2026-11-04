// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Listener interface for selecting a tab
// summary: Interface notified when a tab is being selected so the tab can be chosen and the tab switcher layout exited.
// ---

package org.chromium.chrome.browser.tab_ui;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.tab.Tab;

/** Interface for selecting a tab. */
@NullMarked
public interface OnTabSelectingListener {
    /**
     * Called when a tab is getting selected. This will select the tab and exit the layout.
     *
     * @param tabId The ID of selected {@link Tab}.
     */
    void onTabSelecting(int tabId);
}
