// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Web provider factory boundary interface
// summary: Boundary interface for Web globals and singletons, providing methods to build WebContent, create WebSurface instances with event listeners, and report supported features.
// ---

package org.chromium.support_lib_boundary.web;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

import java.lang.reflect.InvocationHandler;
import java.util.function.BiConsumer;
import java.util.function.Consumer;

/** Boundary interface for Web globals and singletons. */
@NullMarked
public interface WebProviderFactoryBoundaryInterface {
    /* WebContentBoundaryInterface */ InvocationHandler buildWebContent(
            /* Config= */ Consumer<BiConsumer<@WebContentConfig Integer, Object>> buildConfig);

    /* WebSurfaceBoundaryInterface */ InvocationHandler createWebSurface(
            BiConsumer<@WebSurfaceEvent Integer, @Nullable Object> eventListener);

    String[] getSupportedFeatures();
}
