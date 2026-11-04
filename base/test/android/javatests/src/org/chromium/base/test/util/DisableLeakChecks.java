// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Annotation to disable LeakCanary checks
// summary: Annotation that turns off LeakCanary leak checks for a test class, even when leak checks are enabled globally.
// ---

package org.chromium.base.test.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

// Annotate a test class with this to disable LeakCanary checks, even if
// @EnableLeakChecks is present or the --enable-leak-checks flag is used.
@Target({ElementType.TYPE})
@Retention(RetentionPolicy.RUNTIME)
public @interface DisableLeakChecks {
    String[] value();
}
