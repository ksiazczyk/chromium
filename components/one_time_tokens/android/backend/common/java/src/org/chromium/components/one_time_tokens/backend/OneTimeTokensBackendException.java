// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: One-time tokens backend exception
// summary: Exception carrying a OneTimeTokensBackendErrorCode that is thrown when an error occurs in the one-time token backend.
// ---

package org.chromium.components.one_time_tokens.backend;

import androidx.annotation.Nullable;

import org.chromium.build.annotations.NullMarked;

/** Exception thrown when there is an error in the one-time token backend. */
@NullMarked
public class OneTimeTokensBackendException extends Exception {
    private final @OneTimeTokensBackendErrorCode int mErrorCode;

    public OneTimeTokensBackendException(
            @Nullable String message, @OneTimeTokensBackendErrorCode int errorCode) {
        super(message);
        mErrorCode = errorCode;
    }

    public @OneTimeTokensBackendErrorCode int getErrorCode() {
        return mErrorCode;
    }
}
