// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unsafe libc calls not clean header test
// summary: Header test case verifying that a memcpy call in a not-clean header still produces a warning from the unsafe libc calls check.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_LIBC_CALLS_NOT_CLEAN_H_
#define TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_LIBC_CALLS_NOT_CLEAN_H_

#include <system_string.h>

inline void* disallowed_bad_memcpy(int* i, unsigned s) {
  return memcpy(i, &s, sizeof(s));  // Should generate a warning.
}

#endif  // TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_LIBC_CALLS_NOT_CLEAN_H_
