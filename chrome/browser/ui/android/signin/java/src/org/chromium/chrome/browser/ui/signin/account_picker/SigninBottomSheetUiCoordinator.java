// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sign-in bottom sheet UI coordinator interface
// summary: Interface controlling the lifecycle and visibility of the sign-in bottom sheet UI, with dismiss and account-added callbacks for embedders.
// ---

package org.chromium.chrome.browser.ui.signin.account_picker;

import org.chromium.build.annotations.NullMarked;

/** Controls the lifecycle and visibility of the sign-in bottom sheet UI. */
@NullMarked
public interface SigninBottomSheetUiCoordinator {
    /** Called by the embedder to dismiss the bottom sheet. */
    void dismiss();

    /** Called by the embedder when a new account is added. */
    void onAccountAdded(String accountEmail);
}
