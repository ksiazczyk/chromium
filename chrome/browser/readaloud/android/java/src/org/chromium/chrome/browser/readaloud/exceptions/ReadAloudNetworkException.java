// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ReadAloudNetworkException for Read Aloud network failures
// summary: Extends ReadAloudException to represent Read Aloud errors caused by network issues, wrapping a negative Chrome network error code with a canonical error code.
// ---

package org.chromium.chrome.browser.readaloud.exceptions;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.readaloud.exceptions.ReadAloudException.ReadAloudErrorCode;

/** Represents a ReadAloud error caused by network issues */
@NullMarked
public class ReadAloudNetworkException extends ReadAloudException {

    private final int mChromeErrorCode;

    public ReadAloudNetworkException(int chromeErrorCode, @ReadAloudErrorCode int canonicalCode) {
        super("Chrome network error code: " + chromeErrorCode, null, canonicalCode);
        mChromeErrorCode = chromeErrorCode;
    }

    /**
     * An error code with negative value defined in:
     * https://source.chromium.org/chromium/chromium/src/+/main:net/base/net_error_list.h
     */
    public int getChromeErrorCode() {
        return mChromeErrorCode;
    }
}
