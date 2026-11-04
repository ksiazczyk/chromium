// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prefetch operation status code annotation
// summary: 'IntDef annotation defining constants for prefetch operation outcomes: success, failure, server failure, and duplicate request.'
// ---

package com.android.webview.chromium;

import androidx.annotation.IntDef;

import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;

@IntDef({
    PrefetchOperationStatusCode.SUCCESS,
    PrefetchOperationStatusCode.FAILURE,
    PrefetchOperationStatusCode.SERVER_FAILURE,
    PrefetchOperationStatusCode.DUPLICATE_REQUEST
})
@Retention(RetentionPolicy.SOURCE)
public @interface PrefetchOperationStatusCode {
    int SUCCESS = 0;
    int FAILURE = 1;
    int SERVER_FAILURE = 2;
    int DUPLICATE_REQUEST = 3;
}
