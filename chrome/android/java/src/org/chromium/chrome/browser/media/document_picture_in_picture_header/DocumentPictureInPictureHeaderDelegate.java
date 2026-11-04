// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Document Picture-in-Picture header delegate interface
// summary: Interface for header actions such as back-to-tab and security icon clicks, plus window pinning, display access, and resizing.
// ---

package org.chromium.chrome.browser.media.document_picture_in_picture_header;

import org.chromium.build.annotations.NullMarked;
import org.chromium.ui.display.DisplayAndroid;

/** Delegate to handle header actions. */
@NullMarked
public interface DocumentPictureInPictureHeaderDelegate {
    /** Called when the back to tab button is clicked. */
    void onBackToTab();

    /** Called when the security icon is clicked. */
    void onSecurityIconClicked();

    /** Returns the display for the window. */
    DisplayAndroid getDisplayAndroid();

    /** Returns whether the window is pinned. */
    boolean isWindowPinned();

    /** Resizes the window by the given diff in DP dimensions. */
    void resizeWindow(int widthDiffDp, int heightDiffDp);
}
