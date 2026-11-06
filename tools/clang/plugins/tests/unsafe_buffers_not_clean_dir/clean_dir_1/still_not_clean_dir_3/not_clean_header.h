// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unsafe buffers test fixture header with unchecked pointer indexing
// summary: Test fixture header containing an inline function that indexes a pointer without bounds checks, used to exercise the clang unsafe-buffers plugin in a directory that is not clean.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_STILL_NOT_CLEAN_DIR_3_NOT_CLEAN_HEADER_H_
#define TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_STILL_NOT_CLEAN_DIR_3_NOT_CLEAN_HEADER_H_

inline int yet_yet_another_bad_stuff(int* i, unsigned s) {
  return i[s];
}

#endif  // TOOLS_CLANG_PLUGINS_TESTS_UNSAFE_BUFFERS_NOT_CLEAN_DIR_CLEAN_DIR_1_STILL_NOT_CLEAN_DIR_3_NOT_CLEAN_HEADER_H_
