// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Cronet sample app test
// summary: Placeholder JUnit instrumented test for the Cronet sample app, currently containing only a trivial assertion with a note to write more tests.
// ---

package org.chromium.cronet_sample_apk;

import static com.google.common.truth.Truth.assertThat;

import androidx.test.filters.SmallTest;
import androidx.test.runner.AndroidJUnit4;

import org.junit.Test;
import org.junit.runner.RunWith;

/** TBD: Write more tests for the sample app */
@RunWith(AndroidJUnit4.class)
public class CronetSampleTest {
    @Test
    @SmallTest
    public void testSimple() throws Exception {
        assertThat(1 + 1).isEqualTo(2);
    }
}
