// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CheckedPtr stub header for plugin tests
// summary: Empty CheckedPtr template stub that lets the raw_ptr plugin tests compile without the real implementation.
// ---

#ifndef TOOLS_CLANG_RAW_PTR_PLUGIN_TESTS_BASE_MEMORY_CHECKED_PTR_H_
#define TOOLS_CLANG_RAW_PTR_PLUGIN_TESTS_BASE_MEMORY_CHECKED_PTR_H_

namespace base {

template <typename T>
class CheckedPtr {};

}  // namespace base

using base::CheckedPtr;

#endif  // TOOLS_CLANG_RAW_PTR_PLUGIN_TESTS_BASE_MEMORY_CHECKED_PTR_H_
