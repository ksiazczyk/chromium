// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Startup feature metadata holder service
// summary: Placeholder service that only exposes metadata declared in the library's manifest and is never actually invoked.
// ---

package org.chromium.android_webview.services;

import android.app.Service;
import android.content.Intent;
import android.os.IBinder;

/**
 * A placeholder service to avoid adding application-level metadata. The service
 * is only used to expose metadata defined in the library's manifest. It is
 * never invoked.
 */
public final class StartupFeatureMetadataHolder extends Service {
    public StartupFeatureMetadataHolder() {}

    @Override
    public IBinder onBind(Intent intent) {
        throw new UnsupportedOperationException();
    }
}
