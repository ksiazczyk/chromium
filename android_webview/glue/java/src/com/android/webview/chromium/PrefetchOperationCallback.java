// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Prefetch operation callback interface
// summary: Interface for receiving prefetch operation results, reporting success or error with status, message, and network error codes.
// ---

package com.android.webview.chromium;

import org.chromium.android_webview.common.Lifetime;

@Lifetime.Temporary
public interface PrefetchOperationCallback {
    void onResult(@PrefetchOperationStatusCode int resultCode);

    void onError(@PrefetchOperationStatusCode int errorCode, String message, int networkErrorCode);
}
