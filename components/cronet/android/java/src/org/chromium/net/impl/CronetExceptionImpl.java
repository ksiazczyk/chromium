// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CronetExceptionImpl
// summary: Implements the CronetException base exception with a message and an underlying cause.
// ---

package org.chromium.net.impl;

import org.chromium.net.CronetException;

/** Implements {@link CronetException}. */
public class CronetExceptionImpl extends CronetException {
    public CronetExceptionImpl(String message, Throwable cause) {
        super(message, cause);
    }
}
