// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwMediaIntegrityServiceFactory
// summary: Mojo interface factory that creates an AwMediaIntegrityServiceImpl bound to the given RenderFrameHost for the WebViewMediaIntegrityService interface.
// relations:
//   - depends_on /android_webview/java/src/org/chromium/android_webview/media_integrity/AwMediaIntegrityServiceImpl.java
// ---

package org.chromium.android_webview.media_integrity;

import org.chromium.blink.mojom.WebViewMediaIntegrityService;
import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.RenderFrameHost;
import org.chromium.services.service_manager.InterfaceFactory;

@NullMarked
public class AwMediaIntegrityServiceFactory
        implements InterfaceFactory<WebViewMediaIntegrityService> {
    private final RenderFrameHost mRenderFrameHost;

    public AwMediaIntegrityServiceFactory(RenderFrameHost renderFrameHost) {
        mRenderFrameHost = renderFrameHost;
    }

    @Override
    public WebViewMediaIntegrityService createImpl() {
        return new AwMediaIntegrityServiceImpl(mRenderFrameHost);
    }
}
