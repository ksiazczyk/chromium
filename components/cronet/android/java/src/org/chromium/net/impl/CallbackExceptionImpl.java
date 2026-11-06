// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CallbackExceptionImpl
// summary: Implements the Cronet CallbackException class, wrapping a message and an underlying cause.
// ---

package org.chromium.net.impl;

import org.chromium.net.CallbackException;

/** An implementation of {@link CallbackException}. */
public class CallbackExceptionImpl extends CallbackException {
    public CallbackExceptionImpl(String message, Throwable cause) {
        super(message, cause);
    }
}
