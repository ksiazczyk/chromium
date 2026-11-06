// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Content capture feature flag checks
// summary: Queries native code for whether content capture is enabled and supports a command-line switch to dump captured content to logcat for testing.
// ---

package org.chromium.components.content_capture;

import org.jni_zero.NativeMethods;

import org.chromium.base.CommandLine;
import org.chromium.base.TriState;
import org.chromium.base.TriStateUtils;
import org.chromium.build.annotations.NullMarked;

/** The class to get if feature is enabled from native. */
@NullMarked
public class ContentCaptureFeatures {
    private static final String FLAG = "dump-captured-content-to-logcat-for-testing";
    private static @TriState int sEnableDebugLogging;

    public static boolean isEnabled() {
        return ContentCaptureFeaturesJni.get().isEnabled();
    }

    public static boolean isDumpForTestingEnabled() {
        if (sEnableDebugLogging == TriState.NOT_SET) {
            sEnableDebugLogging = TriStateUtils.from(CommandLine.getInstance().hasSwitch(FLAG));
        }
        return sEnableDebugLogging == TriState.TRUE;
    }

    @NativeMethods
    public interface Natives {
        boolean isEnabled();
    }
}
