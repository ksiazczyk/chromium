// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TabWindowManagerFactory
// summary: Factory class that creates TabWindowManager instances, returning a new TabWindowManagerImpl built from a selector factory, async tab params manager, and maximum selector count.
// ---

package org.chromium.chrome.browser.tabwindow;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.tabmodel.AsyncTabParamsManager;

/** Factory for creating {@link TabWindowManager}. */
@NullMarked
public class TabWindowManagerFactory {
    /** Returns a new instance of {@link TabWindowManagerImpl}. */
    public static TabWindowManager createInstance(
            TabModelSelectorFactory selectorFactory,
            AsyncTabParamsManager asyncTabParamsManager,
            int maxSelectors) {
        return new TabWindowManagerImpl(selectorFactory, asyncTabParamsManager, maxSelectors);
    }
}
