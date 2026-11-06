// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Omnibox suggestions mode facility
// summary: Test facility representing the omnibox focused in suggestions mode, declaring the suggestions dropdown and popped-out location bar depending on platform.
// ---

package org.chromium.chrome.test.transit.omnibox;

import static org.chromium.base.test.transit.ViewElement.unscopedOption;

/** Represents the Omnibox when focused in suggestions mode (DisplayState.SUGGESTIONS). */
public class OmniboxSuggestionsFacility extends OmniboxEnteredTextFacility {
    public OmniboxSuggestionsFacility(OmniboxFacility omniboxFacility, String text) {
        super(omniboxFacility, text);

        if (omniboxFacility.mIsDesktopPlatform) {
            declareView(LOCATION_BAR_POPPED_OUT);
            declareView(SUGGESTIONS_DROPDOWN);
        } else {
            declareNoView(LOCATION_BAR_POPPED_OUT);
            declareView(SUGGESTIONS_DROPDOWN, unscopedOption());
        }
    }
}
