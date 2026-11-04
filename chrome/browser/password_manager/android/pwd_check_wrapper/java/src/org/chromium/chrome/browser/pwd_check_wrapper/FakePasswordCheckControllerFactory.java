// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakePasswordCheckControllerFactory
// summary: Factory that creates FakePasswordCheckController instances and exposes the last created controller for test assertions.
// ---

package org.chromium.chrome.browser.pwd_check_wrapper;

import org.chromium.chrome.browser.password_manager.PasswordManagerHelper;
import org.chromium.chrome.browser.password_manager.PasswordStoreBridge;
import org.chromium.components.sync.SyncService;

public class FakePasswordCheckControllerFactory extends PasswordCheckControllerFactory {
    private FakePasswordCheckController mPasswordCheckController;

    @Override
    public PasswordCheckController create(
            SyncService syncService,
            PasswordStoreBridge passwordStoreBridge,
            PasswordManagerHelper passwordManagerHelper) {
        mPasswordCheckController = new FakePasswordCheckController();
        return mPasswordCheckController;
    }

    public FakePasswordCheckController getLastCreatedController() {
        return mPasswordCheckController;
    }
}
