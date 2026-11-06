// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GURLJavaTestHelper
// summary: Helper for GURLJavaTest that bridges to native code, creating GURL instances and invoking native ICU initialization and URL equivalence tests.
// ---

package org.chromium.url;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

/** Helpers for GURLJavaTest that need to call into native code. */
@JNINamespace("url")
public class GURLJavaTestHelper {
    @CalledByNative
    public static GURL createGURL(String uri) {
        return new GURL(uri);
    }

    public static void nativeInitializeICU() {
        GURLJavaTestHelperJni.get().initializeICU();
    }

    public static void nativeTestGURLEquivalence() {
        GURLJavaTestHelperJni.get().testGURLEquivalence();
    }

    @NativeMethods
    interface Natives {
        void initializeICU();

        void testGURLEquivalence();
    }
}
