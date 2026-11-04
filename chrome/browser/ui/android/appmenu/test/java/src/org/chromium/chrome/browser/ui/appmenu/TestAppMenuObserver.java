// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestAppMenuObserver
// summary: AppMenuObserver implementation for tests that records menu shown, hidden, and highlight change events via CallbackHelpers for verification in test code.
// ---

package org.chromium.chrome.browser.ui.appmenu;

import org.chromium.base.test.util.CallbackHelper;

/** AppMenuObserver that notifies callbacks when app menu events occur. */
public class TestAppMenuObserver implements AppMenuObserver {
    public CallbackHelper menuShownCallback = new CallbackHelper();
    public CallbackHelper menuHiddenCallback = new CallbackHelper();
    public CallbackHelper menuHighlightChangedCallback = new CallbackHelper();
    public boolean menuHighlighting;

    @Override
    public void onMenuVisibilityChanged(boolean isVisible) {
        if (isVisible) {
            menuShownCallback.notifyCalled();
        } else {
            menuHiddenCallback.notifyCalled();
        }
    }

    @Override
    public void onMenuHighlightChanged(boolean highlighting) {
        menuHighlighting = highlighting;
        menuHighlightChangedCallback.notifyCalled();
    }
}
