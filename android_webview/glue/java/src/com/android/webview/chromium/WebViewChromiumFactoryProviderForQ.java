// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewChromiumFactoryProviderForQ
// summary: Factory provider subclass with the class name expected by WebView loading on Android Q, delegating all logic to the base provider class.
// ---

package com.android.webview.chromium;

import android.webkit.WebViewDelegate;

/**
 * On Android Q, the process of loading WebView expects to find a class with this name.
 *
 * <p>Do not add any new code to this class even if it's OS-version-specific; all logic belongs in
 * the base class, with appropriate SDK_INT checks if needed.
 */
public class WebViewChromiumFactoryProviderForQ extends WebViewChromiumFactoryProvider {
    public static WebViewChromiumFactoryProvider create(WebViewDelegate delegate) {
        return WebViewChromiumFactoryProvider.create(delegate);
    }

    protected WebViewChromiumFactoryProviderForQ(WebViewDelegate delegate) {
        super(delegate);
    }
}
