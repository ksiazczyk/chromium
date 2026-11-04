// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mismatch notification sign-in delegate interface
// summary: Interface that bridges the mismatch notification controller with sign-in logic by starting the sign-in flow with a given configuration.
// ---

package org.chromium.chrome.browser.customtabs.features.branding;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.ui.signin.BottomSheetSigninAndHistorySyncConfig;

/** Interface bridging the mismatch notification controller with the sign-in logic. */
@NullMarked
public interface MismatchNotificationSigninDelegate {
    /**
     * Starts the sign-in flow.
     *
     * @param config The sign-in configuration.
     */
    void startSignin(BottomSheetSigninAndHistorySyncConfig config);
}
