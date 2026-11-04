// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VersionConstantsBridge
// summary: JNI bridge class that exposes VersionConstants channel values to native code and forwards channel changes from native.
// ---

package org.chromium.base.version_info;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/** Bridge between native and VersionConstants.java. */
@JNINamespace("version_info::android")
@NullMarked
public class VersionConstantsBridge {
    @CalledByNative
    public static int getChannel() {
        return VersionConstants.CHANNEL;
    }

    public static void setChannel(int channel) {
        VersionConstantsBridgeJni.get().nativeSetChannel(channel);
    }

    @NativeMethods
    interface Natives {
        void nativeSetChannel(int channel);
    }
}
