// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Type-safe wrapper for Media Integrity errors
// summary: Wraps an int annotated with MediaIntegrityErrorCode so it can be passed as an error value through ValueOrErrorCallback without losing type information.
// relations:
//   - depends_on /android_webview/java/src/org/chromium/android_webview/common/MediaIntegrityErrorCode.java
// ---

package org.chromium.android_webview.common;

import org.chromium.build.annotations.NullMarked;

/**
 * Type safe wrapper to capture error codes returned by the media integrity API.
 *
 * <p>This class allows us to pass {@code int} values annotated with {@link MediaIntegrityErrorCode}
 * as the error value of an {@link ValueOrErrorCallback} without losing the enum annotation
 * information.
 */
@NullMarked
public class MediaIntegrityErrorWrapper {

    public final @MediaIntegrityErrorCode int value;

    public MediaIntegrityErrorWrapper(@MediaIntegrityErrorCode int value) {
        this.value = value;
    }
}
