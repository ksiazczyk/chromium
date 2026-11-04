// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: LongScreenshotsTabServiceFactory
// summary: Factory that supplies the LongScreenshotsTabService instance for the current profile through a JNI bridge to the native side.
// ---

package org.chromium.chrome.browser.share.long_screenshots.bitmap_generation;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/**
 * The Java-side implementations of long_screenshots_tab_service_factory.cc. Provides an instance of
 * {@link LongScreenshotsTabService}.
 */
@JNINamespace("long_screenshots")
@NullMarked
public class LongScreenshotsTabServiceFactory {
    public static LongScreenshotsTabService getServiceInstance() {
        return LongScreenshotsTabServiceFactoryJni.get().getServiceInstanceForCurrentProfile();
    }

    @NativeMethods
    interface Natives {
        LongScreenshotsTabService getServiceInstanceForCurrentProfile();
    }

    private LongScreenshotsTabServiceFactory() {}
}
