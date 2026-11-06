// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DisableChromeAnimations JUnit rule for compositor animations
// summary: JUnit 4 rule that puts CompositorAnimationHandler into testing mode before a test and restores it afterwards, disabling animations during tests.
// ---

package org.chromium.chrome.test.util.browser.compositor.layouts;

import org.junit.rules.ExternalResource;

import org.chromium.chrome.browser.layouts.animation.CompositorAnimationHandler;

/** JUnit 4 rule that disables animations in CompositorAnimationHandler for tests. */
public class DisableChromeAnimations extends ExternalResource {
    private boolean mOldTestingMode;

    @Override
    protected void before() {
        mOldTestingMode = CompositorAnimationHandler.isInTestingMode();
        CompositorAnimationHandler.setTestingMode(true);
    }

    @Override
    protected void after() {
        CompositorAnimationHandler.setTestingMode(mOldTestingMode);
    }
}
