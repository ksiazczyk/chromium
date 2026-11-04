// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UrlBarEditingTextStateProvider interface
// summary: Interface providing the URL bar editing text state, including selection indices, autocomplete eligibility, paste detection, and site search chip setting.
// ---

package org.chromium.chrome.browser.omnibox;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Provider of editing text state from the UrlBar/Omnibox. */
@NullMarked
public interface UrlBarEditingTextStateProvider {
    /** Return the starting selection index for the text. */
    int getSelectionStart();

    /** Return the ending selection index for the text. */
    int getSelectionEnd();

    /** Return whether the view can accept autocomplete. */
    boolean shouldAutocomplete();

    /** Return whether the last edit was the result of a paste operation. */
    boolean wasLastEditPaste();

    /** Return the full text with any inline autocomplete. */
    String getTextWithAutocomplete();

    /** Return the text excluding any inline autocomplete. */
    String getTextWithoutAutocomplete();

    /**
     * Sets the site search chip text.
     *
     * @param keyword The keyword to set.
     */
    void setSiteSearchChip(@Nullable String keyword);
}
