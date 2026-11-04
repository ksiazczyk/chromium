// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Logging utilities for tab group sync
// summary: Provides a debug logging helper that only emits messages when asserts are enabled in the build config.
// ---

package org.chromium.chrome.browser.tab_group_sync;

import org.chromium.base.Log;
import org.chromium.build.BuildConfig;
import org.chromium.build.annotations.NullMarked;

/** Utility methods for logging. All logs should be removed before launch. */
@NullMarked
public final class LogUtils {
    /**
     * Called to log a message.
     *
     * @param tag Used to identify the source of a log message.
     * @param message The log message.
     */
    public static void log(String tag, String message) {
        if (BuildConfig.ENABLE_ASSERTS) {
            Log.d(tag, message);
        }
    }
}
