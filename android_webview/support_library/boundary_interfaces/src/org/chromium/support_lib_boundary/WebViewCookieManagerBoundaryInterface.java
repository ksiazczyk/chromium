// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewCookieManager boundary interface
// summary: Boundary interface exposing cookie info retrieval for a URL through the WebView cookie manager.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

import java.util.List;

/** Boundary interface for CookieManagerCompat. */
@NullMarked
public interface WebViewCookieManagerBoundaryInterface {
    List<String> getCookieInfo(String url);
}
