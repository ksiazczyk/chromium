// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: HubColorSchemeUpdate
// summary: Simple holder for the previous and new Hub color schemes of a color scheme update.
// ---

package org.chromium.chrome.browser.hub;

import org.chromium.build.annotations.NullMarked;

/** Represents color scheme updates to be made in the Hub. */
@NullMarked
public class HubColorSchemeUpdate {
    public final @HubColorScheme int newColorScheme;
    public final @HubColorScheme int previousColorScheme;

    public HubColorSchemeUpdate(
            @HubColorScheme int newColorScheme, @HubColorScheme int previousColorScheme) {
        this.newColorScheme = newColorScheme;
        this.previousColorScheme = previousColorScheme;
    }
}
