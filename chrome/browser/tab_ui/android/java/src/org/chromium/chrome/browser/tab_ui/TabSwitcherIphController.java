// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabSwitcherIphController
// summary: Interface for controlling the display of the IPH dialog in the tab switcher.
// ---

package org.chromium.chrome.browser.tab_ui;

import org.chromium.build.annotations.NullMarked;

/** Interface to control the IPH dialog. */
@NullMarked
public interface TabSwitcherIphController {
    /** Show the dialog with IPH. */
    void showIph();
}
