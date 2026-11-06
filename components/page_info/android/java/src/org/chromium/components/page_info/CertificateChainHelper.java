// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: CertificateChainHelper for obtaining site certificate chains
// summary: Helper class that retrieves the site certificate chain from a WebContents instance through a JNI bridge to native code.
// ---

package org.chromium.components.page_info;

import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;
import org.chromium.content_public.browser.WebContents;

/** Helper class for obtaining site certificate chain from WebContents. */
@NullMarked
public class CertificateChainHelper {
    public static byte[][] getCertificateChain(WebContents webContents) {
        return CertificateChainHelperJni.get().getCertificateChain(webContents);
    }

    @NativeMethods
    interface Natives {
        byte[][] getCertificateChain(WebContents webContents);
    }
}
