// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScrimController interface for hub scrim visibility
// summary: Interface for controlling hub scrim visibility with animated show and hide transitions.
// ---

package org.chromium.chrome.browser.hub;

import org.chromium.build.annotations.NullMarked;

/** Interface for controlling scrim visibility. */
@NullMarked
public interface ScrimController {
    /** Show a scrim with an animation. */
    void startShowingScrim();

    /** Hide the current scrim with an animation. */
    void startHidingScrim();
}
