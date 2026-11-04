// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebResourceError boundary interface
// summary: Boundary interface exposing error code, debug code, and description for WebView resource errors.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for WebResourceErrorCompat. */
@NullMarked
public interface WebResourceErrorBoundaryInterface {
    int getErrorCode();

    int getDebugCode();

    CharSequence getDescription();
}
