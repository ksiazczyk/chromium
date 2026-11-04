// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Package declaration restricted to library scope
// summary: Package declaration marking the support library web boundary package as restricted to library-internal use via the RestrictTo annotation.
// ---

@RestrictTo(RestrictTo.Scope.LIBRARY)
package org.chromium.support_lib_boundary.web;

import androidx.annotation.RestrictTo;
