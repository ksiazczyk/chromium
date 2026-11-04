// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Glue API helper for Android Q WebView render process APIs
// summary: Utility class exposing Android Q (API 29) WebView render process APIs through glue-layer adapters, kept separate so framework verification does not encounter the new APIs.
// ---

package com.android.webview.chromium;

import android.webkit.WebViewRenderProcess;
import android.webkit.WebViewRenderProcessClient;

import org.chromium.android_webview.AwRenderProcess;

import java.util.concurrent.Executor;

/**
 * Utility class to use new APIs that were added in Q (API level 29). These need to exist in a
 * separate class so that Android framework can successfully verify glue layer classes without
 * encountering the new APIs. Note that GlueApiHelper is only for APIs that cannot go to ApiHelper
 * in base/, for reasons such as using system APIs or instantiating an adapter class that is
 * specific to glue layer.
 */
public final class GlueApiHelperForQ {
    private GlueApiHelperForQ() {}

    /** @see {@link WebView#getWebViewRenderProcess()} */
    public static WebViewRenderProcess getWebViewRenderProcess(AwRenderProcess awRenderProcess) {
        return WebViewRenderProcessAdapter.getInstanceFor(awRenderProcess);
    }

    /**
     * @see {@link WebView#setWebViewRenderProcessClient(Executor,
     * WebViewRenderProcessClient)}
     */
    public static void setWebViewRenderProcessClient(
            SharedWebViewChromium sharedWebViewChromium,
            Executor executor,
            WebViewRenderProcessClient client) {
        sharedWebViewChromium.setWebViewRendererClientAdapter(
                new WebViewRenderProcessClientAdapter(executor, client));
    }

    /** @see {@link WebView#getWebViewRenderProcessClient() */
    public static WebViewRenderProcessClient getWebViewRenderProcessClient(
            SharedWebViewRendererClientAdapter adapter) {
        return ((WebViewRenderProcessClientAdapter) adapter).getWebViewRenderProcessClient();
    }
}
