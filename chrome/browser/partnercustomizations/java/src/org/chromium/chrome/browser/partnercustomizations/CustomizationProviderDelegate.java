// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CustomizationProviderDelegate interface
// summary: Interface for retrieving partner customization details such as homepage URL, incognito mode and bookmark editing restrictions.
// ---

package org.chromium.chrome.browser.partnercustomizations;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Delegate used to retrieve information from the context provider about partner customization. */
@NullMarked
public interface CustomizationProviderDelegate {
    /** Returns the homepage string or null if none is available. */
    @Nullable
    String getHomepage();

    /** Returns whether incognito mode is disabled. */
    boolean isIncognitoModeDisabled();

    /** Returns whether bookmark editing is disabled. */
    boolean isBookmarksEditingDisabled();
}
