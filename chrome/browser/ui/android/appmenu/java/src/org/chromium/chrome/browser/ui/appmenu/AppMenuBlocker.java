// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AppMenuBlocker interface for blocking app menu display
// summary: Interface that lets other UI register a blocker preventing the app menu from being shown.
// ---

package org.chromium.chrome.browser.ui.appmenu;

import org.chromium.build.annotations.NullMarked;

/**
 * An interface that may be used to block the app menu from showing (e.g. when other conflicting UI
 * is showing). To register, see {@link AppMenuCoordinator#registerAppMenuBlocker(AppMenuBlocker)}.
 */
@NullMarked
public interface AppMenuBlocker {
    /**
     * @return Whether the app menu can be shown.
     */
    boolean canShowAppMenu();
}
