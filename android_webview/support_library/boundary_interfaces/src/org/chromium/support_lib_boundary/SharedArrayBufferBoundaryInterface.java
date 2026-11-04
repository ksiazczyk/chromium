// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharedArrayBuffer boundary interface
// summary: Boundary interface for SharedArrayBuffer that lets callers create a mapped ByteBuffer and query the buffer's size.
// ---

package org.chromium.support_lib_boundary;

import android.system.ErrnoException;

import org.jspecify.annotations.NullMarked;

import java.nio.ByteBuffer;

/** Boundary interface for SharedArrayBuffer. */
@NullMarked
public interface SharedArrayBufferBoundaryInterface {
    ByteBuffer mapAndCreateByteBuffer() throws ErrnoException;

    long getSize();
}
