// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test files installer helper
// summary: Resolves the installed path of test server data files, with an install hook that is overridden when tests run in other configurations.
// ---

package org.chromium.net;

import android.content.Context;

import org.chromium.base.test.util.UrlUtils;

/** Helper class to install test files. */
public final class TestFilesInstaller {
    // Name of the asset directory in which test files are stored.
    private static final String TEST_FILE_ASSET_PATH =
            "components/cronet/android/test/test_server/data";

    /** Installs test files if files have not been installed. */
    public static void installIfNeeded(Context context) {
        // Do nothing.
        // NOTE(pauljensen): This hook is used (overridden) when tests are run in other
        // configurations, so it should not be removed.
    }

    /** Returns the installed path of the test files. */
    public static String getInstalledPath(Context context) {
        return UrlUtils.getIsolatedTestRoot() + "/" + TEST_FILE_ASSET_PATH;
    }
}
