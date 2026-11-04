// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewRendererClient boundary interface
// summary: Boundary interface with callbacks for when a WebView renderer becomes unresponsive or responsive again.
// ---

package org.chromium.support_lib_boundary;

import android.webkit.WebView;

import org.jspecify.annotations.NullMarked;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for WebViewRendererClient. */
@NullMarked
public interface WebViewRendererClientBoundaryInterface extends FeatureFlagHolderBoundaryInterface {
    void onRendererUnresponsive(WebView view, /* WebViewRenderer */ InvocationHandler renderer);

    void onRendererResponsive(WebView view, /* WebViewRenderer */ InvocationHandler renderer);
}
