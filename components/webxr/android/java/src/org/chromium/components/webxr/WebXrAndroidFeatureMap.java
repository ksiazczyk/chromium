// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebXrAndroidFeatureMap JNI feature checks
// summary: Java-side feature map that queries native code on whether OpenXR, hand tracking, and the OpenXR Android system keyboard are enabled.
// ---

package org.chromium.components.webxr;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

@JNINamespace("webxr")
@NullMarked
public final class WebXrAndroidFeatureMap {
    /** Convenience method to check if OpenXR should be enabled due to complex state. */
    public static boolean isOpenXrEnabled() {
        return WebXrAndroidFeatureMapJni.get().isOpenXrEnabled();
    }

    public static boolean isHandTrackingEnabled() {
        return WebXrAndroidFeatureMapJni.get().isHandTrackingEnabled();
    }

    public static boolean isOpenXrAndroidSystemKeyboardEnabled() {
        return WebXrAndroidFeatureMapJni.get().isOpenXrAndroidSystemKeyboardEnabled();
    }

    @NativeMethods
    public interface Natives {
        boolean isOpenXrEnabled();

        boolean isHandTrackingEnabled();

        boolean isOpenXrAndroidSystemKeyboardEnabled();
    }
}
