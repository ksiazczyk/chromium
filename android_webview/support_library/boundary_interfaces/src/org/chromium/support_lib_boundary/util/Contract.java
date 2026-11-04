// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Contract annotation for NullAway nullness checking
// summary: Defines a method-level Contract annotation used for NullAway nullness contract checking in Chromium.
// ---

package org.chromium.support_lib_boundary.util;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;

/**
 * Used for Nullness checking in Chromium. See:
 * https://github.com/uber/NullAway/wiki/Supported-Annotations#contracts
 */
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.CLASS)
@interface Contract {
    String value();
}
