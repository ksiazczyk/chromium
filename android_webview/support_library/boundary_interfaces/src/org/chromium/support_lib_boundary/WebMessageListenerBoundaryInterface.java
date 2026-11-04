// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebMessageListener boundary interface
// summary: Boundary interface for WebMessageListener delivering posted messages with source origin, main-frame flag, and a JavaScript reply proxy.
// ---

package org.chromium.support_lib_boundary;

import android.net.Uri;
import android.webkit.WebView;

import org.jspecify.annotations.NullMarked;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for org.chromium.android_webview.WebMessageListener. */
@NullMarked
public interface WebMessageListenerBoundaryInterface extends FeatureFlagHolderBoundaryInterface {
    void onPostMessage(
            WebView view,
            /* WebMessage */ InvocationHandler message,
            Uri sourceOrigin,
            boolean isMainFrame,
            /* JsReplyProxy */ InvocationHandler replyProxy);
}
