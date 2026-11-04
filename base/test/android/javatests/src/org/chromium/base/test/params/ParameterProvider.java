// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Interface for parameterized test argument providers
// summary: Interface whose implementations generate Iterable sequences of ParameterSet arguments for parameterized test methods.
// ---

package org.chromium.base.test.params;

/**
 * Generator to use generate arguments for parameterized test methods.
 *
 * @see ParameterAnnotations.UseMethodParameter
 */
public interface ParameterProvider {
    Iterable<ParameterSet> getParameters();
}
