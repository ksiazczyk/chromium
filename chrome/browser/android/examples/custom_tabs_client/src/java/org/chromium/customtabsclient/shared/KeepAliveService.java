// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: KeepAliveService
// summary: Empty Android service that a custom tab can bind to in order to raise the hosting application's importance.
// ---

package org.chromium.customtabsclient.shared;

import android.app.Service;
import android.content.Intent;
import android.os.Binder;
import android.os.IBinder;

import org.chromium.build.annotations.NullMarked;

/** Empty service used by the custom tab to bind to, raising the application's importance. */
@NullMarked
public class KeepAliveService extends Service {
    private static final Binder sBinder = new Binder();

    @Override
    public IBinder onBind(Intent intent) {
        return sBinder;
    }
}
