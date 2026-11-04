// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: LensControllerTest for the Lens icon resource ID
// summary: Robolectric unit test asserting that the Lens icon resource ID returned by LensController is valid.
// ---

package org.chromium.chrome.browser.lens;

import static org.junit.Assert.assertNotEquals;

import org.junit.Test;
import org.junit.runner.RunWith;

import org.chromium.base.test.BaseRobolectricTestRunner;

@RunWith(BaseRobolectricTestRunner.class)
public class LensControllerTest {

    @Test
    public void testGetLensIconResourceId() {
        int resourceId = LensController.getInstance().getLensIconResourceId();
        assertNotEquals("Lens icon resource ID should be valid", 0, resourceId);
    }
}
