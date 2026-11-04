// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebViewPage boundary interface
// summary: Boundary interface for a WebView page that provides its URL and a snapshot of its state.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for WebViewPage. */
@NullMarked
public interface WebViewPageBoundaryInterface extends IsomorphicObjectBoundaryInterface {
    String getUrl();

    /* WebViewPageState */ InvocationHandler snapshotState();
}
