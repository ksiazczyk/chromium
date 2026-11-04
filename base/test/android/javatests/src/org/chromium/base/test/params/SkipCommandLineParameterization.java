// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: SkipCommandLineParameterization annotation
// summary: Annotation marking test classes or methods for which command line parameterization is skipped by the base JUnit runner and host side test harness.
// ---

package org.chromium.base.test.params;

import java.lang.annotation.ElementType;
import java.lang.annotation.Inherited;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * BaseJUnit4ClassRunner and host side test harness skips commandline parameterization for test
 * classes or methods annotated with SkipCommandLineParameterization.
 */
@Inherited
@Retention(RetentionPolicy.RUNTIME)
@Target({ElementType.METHOD, ElementType.TYPE})
public @interface SkipCommandLineParameterization {}
