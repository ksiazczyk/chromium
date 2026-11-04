// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ImportantFormFactors annotation
// summary: Annotation marking form factors where a test is important to run, ensuring commit-queue coverage for those platforms.
// ---

package org.chromium.base.test.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Annotation to mark platforms where a test is important to run.
 *
 * <p>This ensures there is CQ coverage for these form factors.
 */
@Target({ElementType.METHOD, ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface ImportantFormFactors {
    String[] value();
}
