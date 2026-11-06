// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test rule for platform-only Cronet smoke tests
// summary: JUnit test rule that wires the platform-only test support into Cronet smoke tests without importing org.chromium.base classes.
// ---

package org.chromium.net.smoke;

/** Base test class. This class should not import any classes from the org.chromium.base package. */
public class CronetPlatformSmokeTestRule extends CronetSmokeTestRule {

    @Override
    protected TestSupport initTestSupport() {
        return new ChromiumPlatformOnlyTestSupport();
    }
}
