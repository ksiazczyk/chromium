// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ByteBuffer precondition checks
// summary: Utility class with checks that a ByteBuffer is direct and still has remaining capacity, throwing IllegalArgumentException otherwise.
// ---

package org.chromium.net.impl;

import java.nio.ByteBuffer;

/** Utility class to check preconditions. */
public final class Preconditions {
    private Preconditions() {}

    public static void checkDirect(ByteBuffer buffer) {
        if (!buffer.isDirect()) {
            throw new IllegalArgumentException("byteBuffer must be a direct ByteBuffer.");
        }
    }

    public static void checkHasRemaining(ByteBuffer buffer) {
        if (!buffer.hasRemaining()) {
            throw new IllegalArgumentException("ByteBuffer is already full.");
        }
    }
}
