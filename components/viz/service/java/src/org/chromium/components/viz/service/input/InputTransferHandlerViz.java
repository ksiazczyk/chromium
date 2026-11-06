// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'InputTransferHandlerViz: Android touch gesture transfer for viz'
// summary: Java helper called from native viz code that uses Android's WindowManager to transfer a touch gesture between viz and browser input transfer tokens.
// ---

package org.chromium.components.viz.service.input;

import android.os.Build;
import android.view.WindowManager;
import android.window.InputTransferToken;

import androidx.annotation.RequiresApi;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.base.ContextUtils;
import org.chromium.build.annotations.NullMarked;

@RequiresApi(Build.VERSION_CODES.VANILLA_ICE_CREAM)
@JNINamespace("viz")
@NullMarked
public class InputTransferHandlerViz {
    @CalledByNative
    public static boolean transferInput(
            InputTransferToken vizToken, InputTransferToken browserToken) {
        if (ContextUtils.getApplicationContext() == null) {
            return false;
        }
        WindowManager wm =
                ContextUtils.getApplicationContext().getSystemService(WindowManager.class);
        return wm.transferTouchGesture(vizToken, browserToken);
    }
}
