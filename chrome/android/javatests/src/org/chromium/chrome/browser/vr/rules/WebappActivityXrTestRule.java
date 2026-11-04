// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: WebappActivity XR JUnit test rule
// summary: JUnit test rule extending WebappActivityTestRule that starts a WebappActivity on a blank page for XR tests.
// ---

package org.chromium.chrome.browser.vr.rules;

import org.chromium.chrome.browser.vr.rules.XrActivityRestriction.SupportedActivity;
import org.chromium.chrome.browser.webapps.WebappActivityTestRule;

/**
 * XR extension of WebappActivityTestRule. Applies WebappActivityTestRule then opens up a
 * WebappActivity to a blank page.
 */
public class WebappActivityXrTestRule extends WebappActivityTestRule implements XrTestRule {
    @Override
    protected void before() throws Throwable {
        super.before();
        startWebappActivity();
    }

    @Override
    public @SupportedActivity int getRestriction() {
        return SupportedActivity.WAA;
    }
}
