// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabGroupUi
// summary: Interface for the tab groups related UI, extending the bottom controls content delegate with a tab grid dialog visibility check.
// ---

package org.chromium.chrome.browser.tasks.tab_management;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.toolbar.bottom.BottomControlsContentDelegate;

/** Interface for the Tab Groups related UI. */
@NullMarked
public interface TabGroupUi extends BottomControlsContentDelegate {
    /**
     * @return Whether the TabGridDialog is visible.
     */
    boolean isTabGridDialogVisible();
}
