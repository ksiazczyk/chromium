// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WebResourceErrorAdapter
// summary: Chromium implementation of android.webkit.WebResourceError that wraps the internal AwWebResourceError and exposes its error code and description.
// ---

package com.android.webview.chromium;

import android.webkit.WebResourceError;

import org.chromium.android_webview.AwWebResourceError;

/** Chromium implementation of {@link WebResourceError}. */
public class WebResourceErrorAdapter extends WebResourceError {
    private final AwWebResourceError mError;

    public WebResourceErrorAdapter(AwWebResourceError error) {
        mError = error;
    }

    /* package */ AwWebResourceError getAwWebResourceError() {
        return mError;
    }

    @Override
    public int getErrorCode() {
        return mError.getWebviewError();
    }

    @Override
    public CharSequence getDescription() {
        return mError.getDescription();
    }
}
