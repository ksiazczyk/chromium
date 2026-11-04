// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ClangProfiler stub class
// summary: Placeholder ClangProfiler class offering an empty writeClangProfilingProfile method for when clang profiling is not enabled at build time.
// ---

package org.chromium.base.test;

import org.chromium.build.annotations.NullMarked;

/** Placeholder class used when clang profiling is not enabled at building. */
@NullMarked
public class ClangProfiler {
    private ClangProfiler() {}

    public static void writeClangProfilingProfile() {}
}
