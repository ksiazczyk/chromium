// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NavigationParameters boundary interface
// summary: Boundary interface providing navigation parameters such as whether to replace the current entry and additional request headers.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;
import org.jspecify.annotations.Nullable;

import java.util.Map;

/** Boundary interface for NavigationParams. */
@NullMarked
public interface NavigationParametersBoundaryInterface extends FeatureFlagHolderBoundaryInterface {

    boolean getShouldReplaceCurrentEntry();

    @Nullable Map<String, String> getAdditionalHeaders();
}
