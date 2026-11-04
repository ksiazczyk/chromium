// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Speculative loading parameters boundary interface
// summary: Boundary interface for prefetch parameters carrying additional headers, NoVarySearch data, a JavaScript-enabled flag, and an optional variations ID.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

import java.lang.reflect.InvocationHandler;
import java.util.Map;

/** Boundary interface for PrefetchParams. */
@NullMarked
public interface SpeculativeLoadingParametersBoundaryInterface {

    Map<String, String> getAdditionalHeaders();

    @Nullable /* NoVarySearchDataBoundaryInterface */ InvocationHandler getNoVarySearchData();

    boolean isJavaScriptEnabled();

    default @Nullable Integer getVariationsId() {
        return null;
    }
}
