// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeBrowserProvider entry point delegating to its implementation
// summary: Thin SplitCompatContentProvider subclass that loads ChromeBrowserProviderImpl by class name to expose Chrome browser data on Android.
// ---

package org.chromium.chrome.browser.provider;

import org.chromium.build.annotations.IdentifierNameString;
import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.base.SplitCompatContentProvider;

/** See {@link ChromeBrowserProviderImpl}. */
@NullMarked
public class ChromeBrowserProvider extends SplitCompatContentProvider {
    @SuppressWarnings("FieldCanBeFinal") // @IdentifierNameString requires non-final
    private static @IdentifierNameString String sImplClassName =
            "org.chromium.chrome.browser.provider.ChromeBrowserProviderImpl";

    public ChromeBrowserProvider() {
        super(sImplClassName);
    }
}
