// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ChromeStatsLogHelper
// summary: Helper that lets native code log Westworld Android telemetry atoms as int or boolean histogram samples.
// ---

package org.chromium.chrome.browser.metrics;

import android.os.Process;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.base.Log;
import org.chromium.build.annotations.NullMarked;

/** Helper class for native code to log Westworld (Android side telemetry) statistics events. */
@JNINamespace("metrics")
@NullMarked
public class ChromeStatsLogHelper {
    private static final String TAG = "ChromeStatsLogHelper";

    @CalledByNative
    private static void logHistogramAsIntTypeAtom(int atomID, int sample) {
        try {
            ChromeStatsLog.write(atomID, Process.myUid(), sample);
        } catch (Exception e) {
            Log.e(TAG, "Failed to log atom", e);
        }
    }

    @CalledByNative
    private static void logHistogramAsBooleanTypeAtom(int atomID, boolean sample) {
        try {
            ChromeStatsLog.write(atomID, Process.myUid(), sample);
        } catch (Exception e) {
            Log.e(TAG, "Failed to log atom", e);
        }
    }
}
