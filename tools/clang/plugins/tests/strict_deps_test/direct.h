// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Direct include test header for strict deps plugin
// summary: Test fixture header that includes impl_dep.h and undeclared_header.h to verify the strict deps plugin only checks the main module.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_DIRECT_H_
#define TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_DIRECT_H_

#include "impl_dep.h"           // OK (it should only verify the main module).
#include "undeclared_header.h"  // OK (it should only verify the main module)

#endif  // TOOLS_CLANG_PLUGINS_TESTS_STRICT_DEPS_TEST_DIRECT_H_
