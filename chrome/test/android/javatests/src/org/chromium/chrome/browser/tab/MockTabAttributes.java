// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: MockTabAttributes test user data
// summary: Attaches test attributes to a MockTab, recording whether it was restored from disk.
// ---

package org.chromium.chrome.browser.tab;

import org.chromium.base.UserData;

/** Attributes associated with a {@link MockTab} */
public class MockTabAttributes implements UserData {
    public final boolean restoredFromDisk;

    /**
     * @param restoredFromDisk if {@link MockTab} was restored from disk
     */
    public MockTabAttributes(boolean restoredFromDisk) {
        this.restoredFromDisk = restoredFromDisk;
    }

    @Override
    public void destroy() {}
}
