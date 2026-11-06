// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: raw_ptr.h facade header for Clang plugin tests
// summary: Facade header that forwards raw_ptr to the PartitionAlloc pointers implementation so plugin tests can use the short base/memory path.
// ---

#ifndef TOOLS_CLANG_PLUGINS_TESTS_BASE_MEMORY_RAW_PTR_H_
#define TOOLS_CLANG_PLUGINS_TESTS_BASE_MEMORY_RAW_PTR_H_

// Although `raw_ptr` is part of the standalone PA distribution, it is
// easier to use the shorter path in `//base/memory`. We retain this
// facade header for ease of typing.
#include "base/allocator/partition_allocator/src/partition_alloc/pointers/raw_ptr.h"  // IWYU pragma: export

#endif  // TOOLS_CLANG_PLUGINS_TESTS_BASE_MEMORY_RAW_PTR_H_
