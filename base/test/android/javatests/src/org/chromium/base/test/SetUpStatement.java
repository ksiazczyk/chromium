// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SetUpStatement for test rule setup
// summary: JUnit statement that runs a test rule's setUp logic before evaluating the wrapped statement when setup is enabled.
// ---

package org.chromium.base.test;

import org.junit.rules.TestRule;
import org.junit.runners.model.Statement;

/**
 * Custom Statement for SetUpTestRules.
 *
 * Calls {@link SetUpTestRule#setUp} before evaluating {@link SetUpTestRule#base} if
 * {@link SetUpTestRule#shouldSetUp} is true
 */
public class SetUpStatement extends Statement {
    private final Statement mBase;
    private final SetUpTestRule<? extends TestRule> mSetUpTestRule;
    private final boolean mShouldSetUp;

    public SetUpStatement(
            final Statement base, SetUpTestRule<? extends TestRule> callback, boolean shouldSetUp) {
        mBase = base;
        mSetUpTestRule = callback;
        mShouldSetUp = shouldSetUp;
    }

    @Override
    public void evaluate() throws Throwable {
        if (mShouldSetUp) {
            mSetUpTestRule.setUp();
        }
        mBase.evaluate();
    }
}
