// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NativePaintPreviewServiceProvider interface
// summary: Java interface that lets Java-side implementations of paint_preview_base_service.cc access the native PaintPreviewBaseService via getNativeBaseService().
// ---

package org.chromium.components.paintpreview.browser;

import org.chromium.build.annotations.NullMarked;

/**
 * The Java-side implementations of paint_preview_base_service.cc should implement this interface.
 * Provides a method for accessing the native PaintPreviewBaseService.
 */
@NullMarked
public interface NativePaintPreviewServiceProvider {
    long getNativeBaseService();
}
