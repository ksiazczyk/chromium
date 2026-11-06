// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test fixture stub of base::span for raw_ptr rewrite tests
// summary: Minimal stub of base::span with a raw_ptr alias used as a test fixture for the raw_ptr field rewrite tool.
// ---

#ifndef TOOLS_CLANG_REWRITE_RAW_PTR_FIELDS_TESTS_BASE_CONTAINERS_SPAN_H_
#define TOOLS_CLANG_REWRITE_RAW_PTR_FIELDS_TESTS_BASE_CONTAINERS_SPAN_H_

#include <limits>

namespace base {

template <typename T>
class raw_ptr {};

constexpr inline std::size_t dynamic_extent =
    std::numeric_limits<std::size_t>::max();

template <typename T,
          std::size_t Extent = dynamic_extent,
          typename InternalPtrType = T*>
class span {
 public:
  InternalPtrType data_;
};

template <typename T>
using raw_span = span<T, dynamic_extent, raw_ptr<T>>;
}  // namespace base

#endif  // TOOLS_CLANG_REWRITE_RAW_PTR_FIELDS_TESTS_BASE_CONTAINERS_SPAN_H_
