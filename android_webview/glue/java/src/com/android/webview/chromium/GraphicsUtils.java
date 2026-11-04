// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GraphicsUtils native function table access
// summary: Abstract class exposing native software and GL drawing function tables used by the Android framework via manual JNI registration.
// ---

package com.android.webview.chromium;

import org.chromium.build.annotations.UsedByReflection;

abstract class GraphicsUtils {
    public static long getDrawSWFunctionTable() {
        return nativeGetDrawSWFunctionTable();
    }

    // The Android framework performs manual JNI registration on these methods, so the method
    // signatures cannot change without updating the framework. We use @UsedByReflection, while not
    // technically true, as a way to preserve these methods and their names.
    @UsedByReflection("Android framework manual registration")
    private static native long nativeGetDrawSWFunctionTable();

    @UsedByReflection("Android framework manual registration")
    private static native long nativeGetDrawGLFunctionTable();
}
