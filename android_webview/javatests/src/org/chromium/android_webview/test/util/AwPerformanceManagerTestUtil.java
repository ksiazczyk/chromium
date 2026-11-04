// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Performance Manager JNI test utility for Android WebView
// summary: Provides JNI bindings to verify Performance Manager graph nodes exist for a WebContents in browser tests.
// ---

package org.chromium.android_webview.test.util;

import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.content_public.browser.WebContents;

/** JNI utilities for verifying Performance Manager graph state in browser tests. */
@JNINamespace("android_webview")
public class AwPerformanceManagerTestUtil {
    @NativeMethods
    public interface Natives {
        boolean verifyGraphNodesExist(
                @JniType("content::WebContents*") WebContents webContents,
                @JniType("std::string") String frameUrl,
                @JniType("std::string") String workerUrl);
    }
}
