// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DataSaverOSSetting Java wrapper for native data reduction setting
// summary: Java wrapper for the native datareduction::DataSaverOSSetting that reports whether the OS-level Data Saver background restriction is enabled on metered networks.
// ---

package org.chromium.chrome.browser.datareduction;

import android.content.Context;
import android.net.ConnectivityManager;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.base.ContextUtils;
import org.chromium.build.annotations.NullMarked;

/** Wrapper for the datareduction::DataSaverOSSetting. */
@JNINamespace("datareduction::android")
@NullMarked
public class DataSaverOSSetting {
    @CalledByNative
    public static boolean isDataSaverEnabled() {
        Context context = ContextUtils.getApplicationContext();
        ConnectivityManager connMgr =
                (ConnectivityManager) context.getSystemService(Context.CONNECTIVITY_SERVICE);
        if (connMgr.isActiveNetworkMetered()) {
            return connMgr.getRestrictBackgroundStatus()
                    == ConnectivityManager.RESTRICT_BACKGROUND_STATUS_ENABLED;
        }
        return false;
    }
}
