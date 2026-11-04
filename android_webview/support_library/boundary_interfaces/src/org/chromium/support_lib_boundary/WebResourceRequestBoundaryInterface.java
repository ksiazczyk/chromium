// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebResourceRequest boundary interface
// summary: Boundary interface exposing whether a WebView resource request is a redirect.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for WebResourceRequest. */
@NullMarked
public interface WebResourceRequestBoundaryInterface {
    boolean isRedirect();
}
