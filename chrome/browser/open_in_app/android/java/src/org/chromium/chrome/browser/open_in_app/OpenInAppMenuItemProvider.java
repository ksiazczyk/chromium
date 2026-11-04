// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: OpenInAppMenuItemProvider
// summary: Interface that provides the Open in App info used to display the Open in App menu item.
// ---

package org.chromium.chrome.browser.open_in_app;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;
import org.chromium.chrome.browser.open_in_app.OpenInAppDelegate.OpenInAppInfo;

/** Interface for providing "Open in App" menu item data. */
@NullMarked
public interface OpenInAppMenuItemProvider {
    /** Returns the {@link OpenInAppInfo} for the "Open in App" menu item. */
    @Nullable OpenInAppInfo getOpenInAppInfoForMenuItem();
}
