// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NativeTestApplication
// summary: Application class for native test APKs that initializes an empty command line and sets the Mockito Android target property for mock initialization.
// ---

package org.chromium.native_test;

import android.app.Application;
import android.content.Context;

import org.chromium.base.CommandLine;

/** Application class to be used by native_test apks. */
public class NativeTestApplication extends Application {
    @Override
    protected void attachBaseContext(Context base) {
        super.attachBaseContext(base);
        assert getBaseContext() != null;
        CommandLine.init(new String[] {});

        // This is required for Mockito to initialize mocks without running under Instrumentation.
        System.setProperty("org.mockito.android.target", getCacheDir().getPath());
    }
}
