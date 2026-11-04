// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: 'FindsFeatureMap: Java mapping of native Finds features'
// summary: Singleton FeatureMap subclass that bridges native Finds feature flags to Java over JNI.
// ---

package org.chromium.chrome.browser.finds;

import org.jni_zero.JNINamespace;
import org.jni_zero.NativeMethods;

import org.chromium.base.FeatureMap;
import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

/** Maps native finds features to java. */
@JNINamespace("finds::android")
@NullMarked
public class FindsFeatureMap extends FeatureMap {
    private static @Nullable FindsFeatureMap sInstance;

    // Not directly instantiable.
    private FindsFeatureMap() {
        super();
    }

    /**
     * @return the singleton FindsFeatureMap.
     */
    public static FindsFeatureMap getInstance() {
        if (sInstance == null) sInstance = new FindsFeatureMap();
        return sInstance;
    }

    @Override
    protected long getNativeMap() {
        return FindsFeatureMapJni.get().getNativeMap();
    }

    @NativeMethods
    protected interface Natives {
        long getNativeMap();
    }
}
