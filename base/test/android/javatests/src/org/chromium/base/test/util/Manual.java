// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Manual test annotation
// summary: Annotation marking tests that should only be run manually and are excluded from bots because they are slow or need monitoring.
// ---

package org.chromium.base.test.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * This annotation can be used to mark a test that should only be run manually.
 * <p>
 * Tests with this annotation will not be run on bots, because they take too long
 * or need manual monitoring.
 */
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)
public @interface Manual {
    String message() default "";
}
