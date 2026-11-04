// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: JNI bridge to initialize the native feature list
// summary: Calls into native code through JNI to initialize the feature list for the variations Android module.
// ---

package org.chromium.chrome.browser.init;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

@JNINamespace("variations::android")
@NullMarked
public final class InitializeFeatureList {

    private InitializeFeatureList() {}

    public static void initializeFeatureList() {
        InitializeFeatureListJni.get().initializeFeatureList();
    }

    @NativeMethods
    interface Natives {
        void initializeFeatureList();
    }
}
