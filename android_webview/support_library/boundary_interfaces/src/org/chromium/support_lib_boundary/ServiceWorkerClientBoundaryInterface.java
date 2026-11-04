// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ServiceWorkerClient boundary interface
// summary: Boundary interface for intercepting service worker requests through a shouldInterceptRequest method.
// ---

package org.chromium.support_lib_boundary;

import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

/** Boundary interface for ServiceWorkerClient. */
@NullMarked
public interface ServiceWorkerClientBoundaryInterface extends FeatureFlagHolderBoundaryInterface {
    @Nullable WebResourceResponse shouldInterceptRequest(WebResourceRequest request);
}
