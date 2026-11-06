// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestClassNameCheckTesting
// summary: ErrorProne test input whose JUnit test class name is expected to trigger the TestClassNameCheck warning.
// ---

package org.chromium.tools.errorprone.plugin;

import org.junit.Test;
import org.junit.runner.RunWith;

import org.chromium.base.test.BaseJUnit4ClassRunner;

/** Should cause 'TestClassNameCheck' errorprone warning. */
@RunWith(BaseJUnit4ClassRunner.class)
public class TestClassNameCheckTesting {
    @Test
    public void testRandom() {}
}
