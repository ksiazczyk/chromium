// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PreloadingDataBridge
// summary: Java bridge class that forwards registration of an is-navigation-in-domain callback for Chrome Custom Tabs to native preloading code via JNI.
// ---

package org.chromium.chrome.browser.preloading;

import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.WebContents;

@NullMarked
public class PreloadingDataBridge {
    public static void setIsNavigationInDomainCallbackForCct(WebContents webContents) {
        PreloadingDataBridgeJni.get().setIsNavigationInDomainCallbackForCct(webContents);
    }

    @NativeMethods
    public interface Natives {
        void setIsNavigationInDomainCallbackForCct(
                @JniType("content::WebContents*") WebContents webContents);
    }
}
