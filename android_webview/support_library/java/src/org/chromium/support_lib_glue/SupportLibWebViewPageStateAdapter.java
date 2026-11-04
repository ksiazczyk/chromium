// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Page state support library adapter
// summary: Adapts WebViewPageStateBoundaryInterface to AwPageState, exposing the state URL and its associated page.
// relations:
//   - depends_on /android_webview/support_library/java/src/org/chromium/support_lib_glue/SupportLibWebViewPageAdapter.java
// ---

package org.chromium.support_lib_glue;

import static org.chromium.support_lib_glue.SupportLibWebViewChromiumFactory.recordApiCall;

import org.chromium.android_webview.AwPageState;
import org.chromium.android_webview.common.Lifetime;
import org.chromium.base.TraceEvent;
import org.chromium.build.annotations.NullMarked;
import org.chromium.support_lib_boundary.WebViewPageStateBoundaryInterface;
import org.chromium.support_lib_boundary.util.BoundaryInterfaceReflectionUtil;
import org.chromium.support_lib_glue.SupportLibWebViewChromiumFactory.ApiCall;

import java.lang.reflect.InvocationHandler;

/**
 * Adapter between WebViewPageStateBoundaryInterface and AwPageState.
 *
 * <p>Once created, instances are kept alive by the peer AwPageState.
 */
@Lifetime.Temporary
@NullMarked
class SupportLibWebViewPageStateAdapter implements WebViewPageStateBoundaryInterface {
    private final AwPageState mPageState;

    SupportLibWebViewPageStateAdapter(AwPageState pageState) {
        mPageState = pageState;
    }

    @Override
    public String getUrl() {
        try (TraceEvent event = TraceEvent.scoped("WebView.APICall.AndroidX.PAGE_STATE_GET_URL")) {
            recordApiCall(ApiCall.PAGE_STATE_GET_URL);
            return mPageState.getUrl();
        }
    }

    @Override
    public /* WebViewPage */ InvocationHandler getPage() {
        try (TraceEvent event = TraceEvent.scoped("WebView.APICall.AndroidX.PAGE_STATE_GET_PAGE")) {
            recordApiCall(ApiCall.PAGE_STATE_GET_PAGE);
            return BoundaryInterfaceReflectionUtil.createInvocationHandlerFor(
                    new SupportLibWebViewPageAdapter(mPageState.getPage()));
        }
    }
}
