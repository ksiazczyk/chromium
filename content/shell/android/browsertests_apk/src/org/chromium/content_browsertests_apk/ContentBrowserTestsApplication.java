// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ContentBrowserTestsApplication
// summary: Application class for the content browser tests APK that sets the private data directory suffix and disables locale pak resources in the browser process.
// ---

package org.chromium.content_browsertests_apk;

import android.content.Context;

import org.chromium.base.PathUtils;
import org.chromium.native_test.NativeBrowserTestApplication;
import org.chromium.ui.base.ResourceBundle;

/** A basic content_public.browser.tests {@link android.app.Application}. */
public class ContentBrowserTestsApplication extends NativeBrowserTestApplication {
    static final String PRIVATE_DATA_DIRECTORY_SUFFIX = "content_shell";

    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);

        if (isBrowserProcess()) {
            // Test-only stuff, see also NativeUnitTest.java.
            PathUtils.setPrivateDataDirectorySuffix(PRIVATE_DATA_DIRECTORY_SUFFIX);
            ResourceBundle.setNoAvailableLocalePaks();
        }
    }
}
