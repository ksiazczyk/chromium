// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Send Tab to Self notification receiver
// summary: Android BroadcastReceiver that handles Send Tab to Self notification changes on user action or timeout by initializing the browser and forwarding intents to the notification manager.
// ---

package org.chromium.chrome.browser.app.send_tab_to_self;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

import org.jni_zero.CalledByNative;

import org.chromium.build.annotations.NullMarked;
import org.chromium.chrome.browser.init.BrowserParts;
import org.chromium.chrome.browser.init.ChromeBrowserInitializer;
import org.chromium.chrome.browser.init.EmptyBrowserParts;
import org.chromium.chrome.browser.share.send_tab_to_self.NotificationManager;

/** Handles changes to notifications based on user action or timeout. */
@NullMarked
public class SendTabToSelfNotificationReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        final BrowserParts parts =
                new EmptyBrowserParts() {
                    @Override
                    public void finishNativeInitialization() {
                        NotificationManager.handleIntent(intent);
                    }
                };

        // Try to load native.
        ChromeBrowserInitializer.getInstance().handlePreNativeStartupAndLoadLibraries(parts);
        ChromeBrowserInitializer.getInstance().handlePostNativeStartup(true, parts);
    }

    @CalledByNative
    public static Class<?> getSendTabToSelfNotificationReciever() {
        return SendTabToSelfNotificationReceiver.class;
    }
}
