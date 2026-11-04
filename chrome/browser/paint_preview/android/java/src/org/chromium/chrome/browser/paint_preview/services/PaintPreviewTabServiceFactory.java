// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PaintPreviewTabServiceFactory
// summary: Factory that provides an instance of PaintPreviewTabService for the current profile via a JNI call to the native paint_preview_tab_service_factory.cc.
// ---

package org.chromium.chrome.browser.paint_preview.services;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/**
 * The Java-side implementations of paint_preview_tab_service_factory.cc. Provides an instance of
 * {@link PaintPreviewTabService}.
 */
@NullMarked
@JNINamespace("paint_preview")
public class PaintPreviewTabServiceFactory {
    public static PaintPreviewTabService getServiceInstance() {
        return PaintPreviewTabServiceFactoryJni.get().getServiceInstanceForCurrentProfile();
    }

    @NativeMethods
    public interface Natives {
        PaintPreviewTabService getServiceInstanceForCurrentProfile();
    }
}
