// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: InputHintCheckerTestUtil
// summary: Creates an Android View on request from native code for input hint checking tests.
// ---

package org.chromium.base;

import android.view.View;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.build.annotations.NullMarked;

@NullMarked
@JNINamespace("base::android")
final class InputHintCheckerTestUtil {
    private InputHintCheckerTestUtil() {}

    @CalledByNative
    private static View createView() {
        return new View(ContextUtils.getApplicationContext());
    }
}
