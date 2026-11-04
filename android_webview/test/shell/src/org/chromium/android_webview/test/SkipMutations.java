// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Annotation to skip AwSettings mutations
// summary: Method annotation that excludes a test from running with mutated AwSettings when the test asserts default setting values on entry.
// ---

package org.chromium.android_webview.test;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Specify that a test case should not be run with mutated AwSettings
 *
 * <p>
 * This can be applied to an individual method. Use this when
 * the test is known to - explicitly or implicitly - assert the default
 * value of a setting on entry.
 */
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.METHOD})
public @interface SkipMutations {
    String reason();
}
