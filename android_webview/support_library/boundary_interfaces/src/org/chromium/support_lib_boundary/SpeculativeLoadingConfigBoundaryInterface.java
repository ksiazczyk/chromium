// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Speculative loading config boundary interface
// summary: Boundary interface for SpeculativeLoadingConfig providing limits on prefetches, prefetch time-to-live in seconds, and prerenders.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for SpeculativeLoadingConfig. */
@NullMarked
public interface SpeculativeLoadingConfigBoundaryInterface {

    int getMaxPrefetches();

    int getPrefetchTTLSeconds();

    int getMaxPrerenders();
}
