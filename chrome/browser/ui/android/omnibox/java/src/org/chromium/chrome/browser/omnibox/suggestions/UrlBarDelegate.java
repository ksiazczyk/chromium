// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: UrlBarDelegate interface
// summary: Interface for modifying the location bar and its contents, such as clearing omnibox focus and setting editing text.
// ---

package org.chromium.chrome.browser.omnibox.suggestions;

import org.chromium.build.annotations.NullMarked;

/** An interface for modifying the location bar and its contents. */
@NullMarked
public interface UrlBarDelegate {
    /** Remove focus from the omnibox. */
    void clearOmniboxFocus();

    /**
     * Set the text in the omnibox.
     *
     * @param text The text that should be displayed in the omnibox.
     */
    void setOmniboxEditingText(String text);
}
