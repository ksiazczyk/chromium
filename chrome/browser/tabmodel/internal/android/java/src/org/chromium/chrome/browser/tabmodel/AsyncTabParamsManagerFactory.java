// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AsyncTabParamsManagerFactory
// summary: Factory class that creates AsyncTabParamsManager instances by returning a new AsyncTabParamsManagerImpl.
// ---

package org.chromium.chrome.browser.tabmodel;

import org.chromium.build.annotations.NullMarked;

/** Factory for creating {@link AsyncTabParamsManager}. */
@NullMarked
public class AsyncTabParamsManagerFactory {
    /** Returns a new instance of {@link AsyncTabParamsManagerImpl}. */
    public static AsyncTabParamsManager createAsyncTabParamsManager() {
        return new AsyncTabParamsManagerImpl();
    }
}
