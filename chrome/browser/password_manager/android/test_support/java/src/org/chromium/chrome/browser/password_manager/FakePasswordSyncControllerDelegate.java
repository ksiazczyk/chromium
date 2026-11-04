// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake PasswordSyncControllerDelegate for integration tests
// summary: Fake sync controller delegate that immediately reports sync success to the credential manager for integration tests.
// ---

package org.chromium.chrome.browser.password_manager;

import org.chromium.base.Callback;

/** Fake {@link PasswordSyncControllerDelegate} to be used in integration tests. */
public class FakePasswordSyncControllerDelegate implements PasswordSyncControllerDelegate {
    @Override
    public void notifyCredentialManagerWhenSyncing(
            String accountName, Runnable successCallback, Callback<Exception> failureCallback) {
        // TODO crbug.com/40847858: Fill in this method with more logic,
        //  as it's needed for integration testing
        successCallback.run();
    }

    @Override
    public void notifyCredentialManagerWhenNotSyncing(
            Runnable successCallback, Callback<Exception> failureCallback) {
        // TODO crbug.com/40847858: Fill in this method with more logic,
        //  as it's needed for integration testing
        successCallback.run();
    }
}
