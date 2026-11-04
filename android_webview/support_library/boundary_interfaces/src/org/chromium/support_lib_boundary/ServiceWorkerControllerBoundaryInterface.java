// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ServiceWorkerController boundary interface
// summary: Boundary interface for accessing service worker web settings and setting the service worker client.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

import java.lang.reflect.InvocationHandler;

/** Boundary interface for ServiceWorkerController. */
@NullMarked
public interface ServiceWorkerControllerBoundaryInterface {
    /* ServiceWorkerWebSettings */ InvocationHandler getServiceWorkerWebSettings();

    void setServiceWorkerClient(/* ServiceWorkerClient */ @Nullable InvocationHandler client);
}
