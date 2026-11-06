// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unsafe buffers plugin test header with intentionally unsafe code
// summary: Test fixture header for the clang unsafe-buffers plugin that includes system_unsafe_buffers.h and performs unchecked pointer indexing to trigger diagnostics.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_
#define TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_

#include <system_unsafe_buffers.h>

inline int yet_another_bad_stuff(int* i, unsigned s) {
  return i[s];
}
#endif  // TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_
