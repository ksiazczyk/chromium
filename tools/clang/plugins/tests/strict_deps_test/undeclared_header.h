// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Undeclared header test fixture
// summary: Test fixture header that includes indirect.h to verify the plugin does not dig into undeclared headers.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_UNDECLARED_HEADER_H_
#define TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_UNDECLARED_HEADER_H_

#include "indirect.h"  // OK (shouldn't dig into undeclared headers)

#endif  // TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_UNDECLARED_HEADER_H_
