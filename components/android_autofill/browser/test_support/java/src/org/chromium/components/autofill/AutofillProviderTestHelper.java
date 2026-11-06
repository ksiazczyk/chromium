// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AutofillProviderTestHelper
// summary: JNI bridge that lets Autofill provider tests simulate main frame autofill server responses and predictions via native code.
// ---

package org.chromium.components.autofill;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.content_public.browser.WebContents;

/** The help class for Autofill Provider test to access the native code. */
@JNINamespace("autofill")
public class AutofillProviderTestHelper {
    /** Simulate the primary server type only. */
    public static boolean simulateMainFrameAutofillServerResponseForTesting(
            WebContents webContents, String[] fieldIds, int[] fieldTypes) {
        return AutofillProviderTestHelperJni.get()
                .simulateMainFrameAutofillServerResponseForTesting(
                        webContents, fieldIds, fieldTypes);
    }

    /** Simulate the server predictions, the first prediction will be set as primary server type. */
    public static boolean simulateMainFramePredictionsAutofillServerResponseForTesting(
            WebContents webContents, String[] fieldIds, int[][] fieldTypes) {
        return AutofillProviderTestHelperJni.get()
                .simulateMainFramePredictionsAutofillServerResponseForTesting(
                        webContents, fieldIds, fieldTypes);
    }

    @NativeMethods
    interface Natives {
        boolean simulateMainFrameAutofillServerResponseForTesting(
                WebContents webContents, String[] fieldIds, int[] fieldTypes);

        boolean simulateMainFramePredictionsAutofillServerResponseForTesting(
                WebContents webContents, String[] fieldIds, int[][] fieldTypes);
    }
}
