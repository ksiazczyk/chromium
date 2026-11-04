// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Deprecated WebViewNavigationClient boundary interface
// summary: Deprecated boundary interface with callbacks for navigation started, redirected, and completed plus page lifecycle events on a WebView.
// relations:
//   - depends_on /android_webview/support_library/boundary_interfaces/src/org/chromium/support_lib_boundary/FeatureFlagHolderBoundaryInterface.java
// ---

package org.chromium.support_lib_boundary;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for WebViewNavigationClient. */
@Deprecated
public interface WebViewNavigationClientBoundaryInterface
        extends FeatureFlagHolderBoundaryInterface {
    void onNavigationStarted(/* WebViewNavigation */ InvocationHandler navigation);

    void onNavigationRedirected(/* WebViewNavigation */ InvocationHandler navigation);

    void onNavigationCompleted(/* WebViewNavigation */ InvocationHandler navigation);

    void onPageDeleted(/* WebViewPage */ InvocationHandler page);

    void onPageLoadEventFired(/* WebViewPage */ InvocationHandler page);

    void onPageDOMContentLoadedEventFired(/* WebViewPage */ InvocationHandler page);

    void onFirstContentfulPaint(/* WebViewPage */ InvocationHandler page);
}
