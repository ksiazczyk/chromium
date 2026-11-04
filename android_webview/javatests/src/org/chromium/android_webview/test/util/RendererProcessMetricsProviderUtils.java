// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Renderer process metrics test utility
// summary: Test utility with a JNI bridge that forces recording of renderer process metric histograms in the Android WebView native code.
// ---

package org.chromium.android_webview.test.util;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

/** Utilities for force recording renderer process metrics. */
@JNINamespace("android_webview")
public class RendererProcessMetricsProviderUtils {
    @NativeMethods
    public interface Natives {
        /** Calls to RendererProcessMetricsProvider to force record histograms. */
        void forceRecordHistograms();
    }
}
