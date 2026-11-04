// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake PasswordManagerBackendSupportHelper for integration tests
// summary: Fake backend support helper whose backend presence flag can be toggled for integration tests.
// ---

package org.chromium.chrome.browser.password_manager;

/** Fake {@link PasswordManagerBackendSupportHelper} to be used in integration tests. */
public class FakePasswordManagerBackendSupportHelper extends PasswordManagerBackendSupportHelper {
    private boolean mBackendPresent;

    @Override
    public boolean isBackendPresent() {
        return mBackendPresent;
    }

    public void setBackendPresent(boolean backendPresent) {
        mBackendPresent = backendPresent;
    }
}
