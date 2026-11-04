// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewBackForwardCacheSettings boundary interface
// summary: Boundary interface exposing the timeout and maximum page count for the WebView back/forward cache.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for WebViewBackForwardCacheSettings. */
@NullMarked
public interface WebViewBackForwardCacheSettingsBoundaryInterface
        extends IsomorphicObjectBoundaryInterface {
    int getTimeoutInSeconds();

    int getMaxPagesInCache();
}
