// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PathService Java bridge to the native path service
// summary: Provides Java-side access to the native PathService, allowing path overrides such as the module directory via JNI.
// ---

package org.chromium.base;

import org.jni_zero.JNINamespace;
import org.jni_zero.JniType;
import org.jni_zero.NativeMethods;

import org.chromium.build.annotations.NullMarked;

/** This class provides java side access to the native PathService. */
@NullMarked
@JNINamespace("base::android")
public abstract class PathService {

    // Must match the value of DIR_MODULE in base/base_paths.h!
    public static final int DIR_MODULE = 3;

    // Prevent instantiation.
    private PathService() {}

    public static void override(int what, String path) {
        PathServiceJni.get().override(what, path);
    }

    @NativeMethods
    interface Natives {
        void override(int what, @JniType("std::string") String path);
    }
}
