// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Bridge to Android's EventLog for native code
// summary: Exposes a called-by-native method that writes tag and value events to Android's EventLog on behalf of native code.
// ---

package org.chromium.base;

import org.jni_zero.CalledByNative;
import org.jni_zero.JNINamespace;

import org.chromium.build.annotations.NullMarked;

/** A simple interface to Android's EventLog to be used by native code. */
@NullMarked
@JNINamespace("base::android")
public class EventLog {

    @CalledByNative
    public static void writeEvent(int tag, int value) {
        android.util.EventLog.writeEvent(tag, value);
    }
}
