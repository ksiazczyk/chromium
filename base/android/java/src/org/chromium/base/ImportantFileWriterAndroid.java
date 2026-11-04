// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImportantFileWriterAndroid
// summary: Java bridge to native code that writes important data files atomically, so a write either completes fully or leaves the file unchanged.
// ---

package org.chromium.base;

import androidx.annotation.VisibleForTesting;

import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/**
 * This class provides an interface to the native class for writing important data files without
 * risking data loss.
 */
@NullMarked
@JNINamespace("base::android")
public class ImportantFileWriterAndroid {

    /**
     * Write a binary file atomically.
     *
     * This either writes all the data or leaves the file unchanged.
     *
     * @param fileName The complete path of the file to be written
     * @param data The data to be written to the file
     * @return true if the data was written to the file, false if not.
     */
    public static boolean writeFileAtomically(String fileName, byte[] data) {
        return ImportantFileWriterAndroidJni.get().writeFileAtomically(fileName, data);
    }

    @VisibleForTesting
    @NativeMethods
    public interface Natives {
        boolean writeFileAtomically(@JniType("std::string") String fileName, byte[] data);
    }
}
