// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unsafe buffers plugin test header with unchecked violation
// summary: Test fixture header for the Clang unsafe buffers plugin containing an unchecked pointer access in a known-bad header where no error is emitted.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_STILL_NOT_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_
#define TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_STILL_NOT_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_

inline int unchecked_violation_1(int* i, unsigned s) {
  return i[s];  // This is in a known-bad header, so no error is emitted.
}

#endif  // TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_STILL_NOT_CLEAN_DIR_1_NOT_CLEAN_HEADER_H_
