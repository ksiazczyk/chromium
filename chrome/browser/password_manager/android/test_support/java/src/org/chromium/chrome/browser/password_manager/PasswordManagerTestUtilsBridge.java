// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI bridge for password manager test setup
// summary: Bridge with static test-setup methods that disable server predictions and trigger the fake GMS Core backends from native code.
// ---

package org.chromium.chrome.browser.password_manager;

import org.jni_zero.CalledByNativeForTesting;
import org.jni_zero.NativeMethods;

/**
 * This bridge contains static methods related to password manager test setup. It's intended only to
 * be used in tests.
 */
public class PasswordManagerTestUtilsBridge {
    /** Disables server predictions to speed up tests */
    public static void disableServerPredictions() {
        PasswordManagerTestUtilsBridgeJni.get().disableServerPredictions();
    }

    @CalledByNativeForTesting
    public static void setUpGmsCoreFakeBackends() {
        PasswordManagerTestHelper.setUpGmsCoreFakeBackends();
    }

    @NativeMethods
    interface Natives {
        void disableServerPredictions();
    }
}
