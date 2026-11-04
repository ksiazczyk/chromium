// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Trichrome WebView native library preloader
// summary: Preloads the WebView native library from its package so Trichrome can share the library's relro between Chrome and WebView.
// ---

package com.android.webview.chromium;

import android.webkit.WebViewFactory;

import org.chromium.android_webview.common.Lifetime;
import org.chromium.base.library_loader.NativeLibraryPreloader;

/**
 * The library preloader for Trichrome for sharing native library's relro between Chrome and
 * WebView.
 */
@Lifetime.Singleton
public class WebViewLibraryPreloader extends NativeLibraryPreloader {
    @Override
    public int loadLibrary(String packageName) {
        return WebViewFactory.loadWebViewNativeLibraryFromPackage(
                packageName, getClass().getClassLoader());
    }
}
