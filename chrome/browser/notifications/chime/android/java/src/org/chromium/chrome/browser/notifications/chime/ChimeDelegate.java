// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChimeDelegate
// summary: Delegate for Chime notification SDK functionality in Chrome for Android, providing empty initialize and startSession entry points.
// ---

package org.chromium.chrome.browser.notifications.chime;

import org.chromium.build.annotations.NullMarked;

/** Delegate Chime notification SDK functionalities. */
@NullMarked
public class ChimeDelegate {
    /** Initializes Chime SDK. */
    public void initialize() {}

    /** Starts a Chime session. */
    public void startSession() {}
}
