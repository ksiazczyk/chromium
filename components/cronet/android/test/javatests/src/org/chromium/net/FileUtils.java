// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: File utilities for recursive deletion in tests
// summary: Test utility offering recursive file deletion as a simplified fork of the base FileUtils that avoids APIs unavailable on older Android versions.
// ---

package org.chromium.net;

import org.chromium.base.Log;

import java.io.File;

/**
 * Simpler fork of the org.chromium.base class that doesn't rely on java.util.function.Function
 * (unavailable on Android <= M).
 */
public class FileUtils {
    private static final String TAG = "FileUtils";

    public static boolean recursivelyDeleteFile(File currentFile) {
        if (!currentFile.exists()) {
            // This file could be a broken symlink, so try to delete. If we don't delete a broken
            // symlink, the directory containing it cannot be deleted.
            currentFile.delete();
            return true;
        }

        if (currentFile.isDirectory()) {
            File[] files = currentFile.listFiles();
            if (files != null) {
                for (var file : files) {
                    recursivelyDeleteFile(file);
                }
            }
        }

        boolean ret = currentFile.delete();
        if (!ret) {
            Log.e(TAG, "Failed to delete: %s", currentFile);
        }
        return ret;
    }
}
