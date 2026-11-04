// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake password sync controller delegate factory for integration tests
// summary: Factory that creates and caches a fake PasswordSyncControllerDelegate for use in integration tests.
// ---

package org.chromium.chrome.browser.password_manager;

/**
 * The factory for creating fake {@link PasswordSyncControllerDelegate} to be used in integration
 * tests.
 */
public class FakePasswordSyncControllerDelegateFactoryImpl
        extends PasswordSyncControllerDelegateFactory {
    private FakePasswordSyncControllerDelegate mPasswordSyncControllerDelegate;

    @Override
    public PasswordSyncControllerDelegate createDelegate() {
        if (mPasswordSyncControllerDelegate == null) {
            mPasswordSyncControllerDelegate = new FakePasswordSyncControllerDelegate();
        }
        return mPasswordSyncControllerDelegate;
    }
}
