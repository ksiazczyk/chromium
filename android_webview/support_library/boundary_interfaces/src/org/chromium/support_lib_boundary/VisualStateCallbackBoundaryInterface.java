// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Visual state callback boundary interface
// summary: Boundary interface for VisualStateCallback that signals completion of a visual state request by request ID.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/**
 */
@NullMarked
public interface VisualStateCallbackBoundaryInterface {
    void onComplete(long requestId);
}
