// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScriptHandler boundary interface
// summary: Boundary interface for document start JavaScript handlers registered via AwContents.addDocumentStartJavascript, supporting removal.
// ---

package org.chromium.support_lib_boundary;

import org.jspecify.annotations.NullMarked;

/** Boundary interface for AwContents.addDocumentStartJavascript(). */
@NullMarked
public interface ScriptHandlerBoundaryInterface {
    void remove();
}
