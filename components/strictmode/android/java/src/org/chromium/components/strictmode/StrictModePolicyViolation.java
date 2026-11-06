// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: StrictModePolicyViolation
// summary: Placeholder Error thrown for the custom StrictMode death penalty, carrying the violation message and stack trace.
// ---

package org.chromium.components.strictmode;

import org.chromium.build.annotations.NullMarked;

/** Placeholder exception thrown for the custom death penalty. */
@NullMarked
public final class StrictModePolicyViolation extends Error {
    public StrictModePolicyViolation(Violation v) {
        super(v.violationString());
        if (v.stackTrace().length == 0) {
            super.fillInStackTrace();
        } else {
            setStackTrace(v.stackTrace());
        }
    }

    @Override
    public synchronized Throwable fillInStackTrace() {
        return this;
    }
}
