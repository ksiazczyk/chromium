// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'StatisticsRecorderAndroid: histograms as JSON via JNI'
// summary: Java API that exposes the histograms registered on the native side as JSON text, with a verbosity level controlling the dumped detail.
// ---

package org.chromium.base.metrics;

import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/** Java API which exposes the registered histograms on the native side as JSON test. */
@NullMarked
@JNINamespace("base::android")
public final class StatisticsRecorderAndroid {
    private StatisticsRecorderAndroid() {}

    /**
     * @param verbosityLevel controls the information that should be included when dumping each of
     * the histogram.
     * @return All the registered histograms as JSON text.
     */
    public static String toJson(@JSONVerbosityLevel int verbosityLevel) {
        return StatisticsRecorderAndroidJni.get().toJson(verbosityLevel);
    }

    @NativeMethods
    interface Natives {
        @JniType("std::string")
        String toJson(@JSONVerbosityLevel @JniType("JSONVerbosityLevel") int verbosityLevel);
    }
}
