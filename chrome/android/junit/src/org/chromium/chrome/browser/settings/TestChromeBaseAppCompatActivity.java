// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test Chrome base app activity for Robolectric tests
// summary: Lightweight concrete ChromeBaseAppCompatActivity that mocks the ModalDialogManager so Robolectric settings tests can instantiate the activity.
// ---

package org.chromium.chrome.browser.settings;

import static org.mockito.Mockito.mock;

import org.chromium.chrome.browser.ChromeBaseAppCompatActivity;
import org.chromium.ui.modaldialog.ModalDialogManager;

/** Lightweight concrete ChromeBaseAppCompatActivity for Robolectric tests. */
public class TestChromeBaseAppCompatActivity extends ChromeBaseAppCompatActivity {
    @Override
    protected ModalDialogManager createModalDialogManager() {
        return mock(ModalDialogManager.class);
    }
}
