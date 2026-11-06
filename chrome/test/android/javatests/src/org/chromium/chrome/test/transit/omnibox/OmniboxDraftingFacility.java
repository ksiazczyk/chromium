// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Omnibox drafting mode facility
// summary: Test facility representing the omnibox focused in drafting mode, without suggestions dropdown or popped-out location bar.
// ---

package org.chromium.chrome.test.transit.omnibox;

/** Represents the Omnibox when focused in drafting mode (DisplayState.DRAFTING). */
public class OmniboxDraftingFacility extends OmniboxEnteredTextFacility {
    public OmniboxDraftingFacility(OmniboxFacility omniboxFacility, String text) {
        super(omniboxFacility, text);

        declareNoView(LOCATION_BAR_POPPED_OUT);
        declareNoView(SUGGESTIONS_DROPDOWN);
    }
}
