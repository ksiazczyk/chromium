// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Render process gone detail for WebView
// summary: Java class describing why the WebView render process exited, exposing whether it crashed and the renderer priority.
// ---

package org.chromium.android_webview;

import org.chromium.android_webview.renderer_priority.RendererPriority;
import org.chromium.build.annotations.NullMarked;

/**
 * This class provides more specific information about why the render process exited. It is peer of
 * android.webkit.RenderProcessGoneDetail.
 */
@NullMarked
public class AwRenderProcessGoneDetail {
    private final boolean mDidCrash;
    @RendererPriority private final int mRendererPriority;

    public AwRenderProcessGoneDetail(boolean didCrash, @RendererPriority int rendererPriority) {
        mDidCrash = didCrash;
        mRendererPriority = rendererPriority;
    }

    public boolean didCrash() {
        return mDidCrash;
    }

    @RendererPriority
    public int rendererPriority() {
        return mRendererPriority;
    }
}
