// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwShellApplication
// summary: Application subclass of the WebView test shell that initializes the application context, private data directory, command line file, and available pak locales.
// ---

package org.chromium.android_webview.shell;

import android.app.Application;
import android.content.Context;

import org.chromium.android_webview.AwLocaleConfig;
import org.chromium.base.CommandLine;
import org.chromium.base.ContextUtils;
import org.chromium.base.PathUtils;
import org.chromium.ui.base.ResourceBundle;

/** The android_webview shell Application subclass. */
public class AwShellApplication extends Application {
    // Called by the framework for ALL processes. Runs before ContentProviders are created.
    // Quirk: context.getApplicationContext() returns null during this method.
    @Override
    protected void attachBaseContext(Context context) {
        super.attachBaseContext(context);
        ContextUtils.initApplicationContext(this);
        PathUtils.setPrivateDataDirectorySuffix("webview", "WebView");
        CommandLine.initFromFile("/data/local/tmp/android-webview-command-line");
        ResourceBundle.setAvailablePakLocales(AwLocaleConfig.getWebViewSupportedPakLocales());
    }
}
