// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AwSupervisedUserHelper
// summary: Java helper called from native code that opens the supervised user help center in the default browser from the restricted content interstitial, ignoring missing browser activity.
// ---

package org.chromium.android_webview.supervised_user;

import android.content.ActivityNotFoundException;
import android.content.Intent;
import android.net.Uri;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.base.ContextUtils;
import org.chromium.base.ThreadUtils;
import org.chromium.build.annotations.NullMarked;

/** Helper class for executing user actions on the restricted content interstitial. */
@JNINamespace("android_webview")
@NullMarked
final class AwSupervisedUserHelper {
    private static final String HELP_CENTER_URL =
            "https://support.google.com/families?p=content_blocked_webview";

    @CalledByNative
    public static void openHelpCenterInDefaultBrowser() {
        ThreadUtils.postOnUiThread(
                () -> {
                    Intent browserIntent =
                            new Intent(Intent.ACTION_VIEW, Uri.parse(HELP_CENTER_URL));
                    try {
                        browserIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                        ContextUtils.getApplicationContext().startActivity(browserIntent);
                    } catch (ActivityNotFoundException ex) {
                        // If it doesn't work, avoid crashing.
                    }
                });
    }
}
