// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeTabbedActivity AR test rule
// summary: JUnit test rule extending ChromeTabbedActivityTestRule with AR-only setup, opening a ChromeTabbedActivity on a blank page for AR tests.
// ---

package org.chromium.chrome.browser.vr.rules;

import org.junit.runner.Description;
import org.junit.runners.model.Statement;

import org.chromium.chrome.browser.vr.rules.XrActivityRestriction.SupportedActivity;
import org.chromium.chrome.browser.vr.util.ArTestRuleUtils;
import org.chromium.chrome.test.ChromeTabbedActivityTestRule;

/**
 * AR extension of ChromeTabbedActivityTestRule. Applies ChromeTabbedActivityTestRule then opens up
 * a ChromeTabbedActivity to a blank page while performing some additional AR-only setup.
 */
public class ChromeTabbedActivityArTestRule extends ChromeTabbedActivityTestRule
        implements ArTestRule {
    @Override
    public Statement apply(final Statement base, final Description desc) {
        return super.apply(
                new Statement() {
                    @Override
                    public void evaluate() throws Throwable {
                        ArTestRuleUtils.evaluateArTestRuleImpl(
                                base,
                                desc,
                                ChromeTabbedActivityArTestRule.this,
                                () -> {
                                    startMainActivityOnBlankPage();
                                });
                    }
                },
                desc);
    }

    @Override
    public @SupportedActivity int getRestriction() {
        return SupportedActivity.CTA;
    }
}
