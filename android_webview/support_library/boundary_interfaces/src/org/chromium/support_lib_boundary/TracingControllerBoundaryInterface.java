// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing controller boundary interface
// summary: Boundary interface for TracingController that reports tracing state and starts or stops tracing with categories, mode, and an output stream.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

import java.io.OutputStream;
import java.util.Collection;
import java.util.concurrent.Executor;

/** Boundary interface for TracingController. */
@NullMarked
public interface TracingControllerBoundaryInterface {
    boolean isTracing();

    void start(int predefinedCategories, Collection<String> customIncludedCategories, int mode)
            throws IllegalStateException, IllegalArgumentException;

    boolean stop(OutputStream outputStream, Executor executor);
}
