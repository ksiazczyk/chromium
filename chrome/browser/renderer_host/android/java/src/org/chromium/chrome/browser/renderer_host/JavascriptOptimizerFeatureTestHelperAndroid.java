// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI helper for the JavaScript optimizer feature test
// summary: Provides a JNI-backed helper method that lets JavascriptOptimizerFeatureTest query whether JavaScript optimizers are enabled on a WebContents.
// ---

package org.chromium.chrome.browser.renderer_host;

import org.jni_zero.NativeMethods;

import org.chromium.content_public.browser.WebContents;

// Contains helper methods for {@link JavascriptOptimizerFeatureTest}.
public class JavascriptOptimizerFeatureTestHelperAndroid {
    public static boolean areJavascriptOptimizersEnabledOnWebContents(WebContents webContents) {
        return JavascriptOptimizerFeatureTestHelperAndroidJni.get()
                .areJavascriptOptimizersEnabledOnWebContents(webContents);
    }

    @NativeMethods
    interface Natives {
        boolean areJavascriptOptimizersEnabledOnWebContents(WebContents webContents);
    }
}
