// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImageDataFetchResult
// summary: Holds fetched image data as bytes together with optional request metadata, passed between native and Java via JNI.
// ---

package org.chromium.components.image_fetcher;

import org.jni_zero.JNINamespace;

import org.chromium.build.annotations.NullMarked;
import org.chromium.build.annotations.Nullable;

@JNINamespace("image_fetcher")
@NullMarked
public class ImageDataFetchResult {
    public final byte[] imageData;
    public final @Nullable RequestMetadata requestMetadata;

    public ImageDataFetchResult(byte[] imageData, @Nullable RequestMetadata requestMetadata) {
        this.imageData = imageData;
        this.requestMetadata = requestMetadata;
    }
}
