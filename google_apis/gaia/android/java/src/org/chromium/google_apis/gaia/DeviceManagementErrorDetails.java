// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceManagementErrorDetails
// summary: Java class holding details for the device management error state of GoogleServiceAuthError, carrying an optional Android PendingIntent created via JNI.
// ---

package org.chromium.google_apis.gaia;

import android.app.PendingIntent;

import org.jni_zero.CalledByNative;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Details for {@link GoogleServiceAuthErrorState.DEVICE_MANAGEMENT_ERROR}. */
@NullMarked
public class DeviceManagementErrorDetails {
    private final @Nullable PendingIntent mPendingIntent;

    @CalledByNative
    public DeviceManagementErrorDetails(@Nullable PendingIntent pendingIntent) {
        mPendingIntent = pendingIntent;
    }

    public @Nullable PendingIntent getPendingIntent() {
        return mPendingIntent;
    }
}
