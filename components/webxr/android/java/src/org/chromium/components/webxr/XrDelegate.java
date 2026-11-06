// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: XrDelegate interface for AR and VR build-time integration
// summary: Interface used by ChromeActivity to communicate with AR and VR code that is only compiled in when enable_arcore or enable_cardboard is set.
// ---

package org.chromium.components.webxr;

import org.chromium.build.annotations.NullMarked;
import org.chromium.components.browser_ui.widget.gesture.BackPressHandler;

/**
 * Interface used by ChromeActivity to communicate with AR and VR code that is only available if
 * |enable_arcore| or |enable_cardboard| are set to true at build time.
 */
@NullMarked
public interface XrDelegate extends BackPressHandler {
    /**
     * Used to request the XrDelegate handle a BackPress event; note that this is the old way of
     * handling a BackPress, but it is still in use in @{link ChromeActivity}
     */
    boolean onBackPressed();

    /**
     * Returns whether or not there is an active, ongoing AR session (as opposed to either no
     * session or a VR Session).
     */
    boolean hasActiveArSession();
}
