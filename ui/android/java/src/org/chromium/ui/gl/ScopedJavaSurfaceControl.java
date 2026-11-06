// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScopedJavaSurfaceControl
// summary: Java helper exposing a JNI-called method for native code to release an Android SurfaceControl on Android Q and later.
// ---

package org.chromium.ui.gl;

import android.os.Build;
import android.view.SurfaceControl;

import androidx.annotation.RequiresApi;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.build.annotations.NullMarked;

@RequiresApi(Build.VERSION_CODES.Q)
@JNINamespace("gl")
@NullMarked
class ScopedJavaSurfaceControl {
    @CalledByNative
    private static void releaseSurfaceControl(SurfaceControl surfaceControl) {
        surfaceControl.release();
    }
}
