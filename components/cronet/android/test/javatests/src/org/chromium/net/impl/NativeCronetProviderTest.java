// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: NativeCronetProvider tests
// summary: Verifies that NativeCronetProvider reports itself as enabled for the application context.
// ---

package org.chromium.net.impl;

import static com.google.common.truth.Truth.assertThat;

import androidx.test.core.app.ApplicationProvider;
import androidx.test.ext.junit.runners.AndroidJUnit4;
import androidx.test.filters.SmallTest;

import org.junit.Test;
import org.junit.runner.RunWith;

import org.chromium.base.test.util.Batch;

@Batch(Batch.UNIT_TESTS)
@RunWith(AndroidJUnit4.class)
public class NativeCronetProviderTest {
    @Test
    @SmallTest
    public void testIsEnabledReturnsTrue() throws Exception {
        assertThat(
                        new NativeCronetProvider(ApplicationProvider.getApplicationContext())
                                .isEnabled())
                .isTrue();
    }
}
