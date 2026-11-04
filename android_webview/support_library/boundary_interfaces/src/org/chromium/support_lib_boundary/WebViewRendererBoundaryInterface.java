// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewRenderer boundary interface
// summary: Boundary interface for a WebView renderer that allows terminating the renderer process.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for WebViewRenderer. */
@NullMarked
public interface WebViewRendererBoundaryInterface extends IsomorphicObjectBoundaryInterface {
    boolean terminate();
}
