// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Annotation marking tests as disabled
// summary: Marks test methods or classes as disabled so they are skipped on normal bots, with an optional message.
// ---

package org.chromium.base.test.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * This annotation is for disabled tests.
 * <p>
 * Tests with this annotation will not be run on any of the normal bots.
 * Please note that they might eventually run on a special bot.
 */
@Target({ElementType.METHOD, ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface DisabledTest {
    String message() default "";
}
