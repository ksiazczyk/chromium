// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Compile-time helper utilities for the dispatcher
// summary: Provides constexpr comparison helpers and an observer null-check functor used by the dispatcher's compile-time validation of observers.
// ---

#ifndef BASE_ALLOCATOR_DISPATCHER_INTERNAL_TOOLS_H_
#define BASE_ALLOCATOR_DISPATCHER_INTERNAL_TOOLS_H_

#include <cstddef>

namespace base::allocator::dispatcher::internal {

constexpr bool LessEqual(size_t lhs, size_t rhs) {
  return lhs <= rhs;
}

constexpr bool Equal(size_t lhs, size_t rhs) {
  return lhs == rhs;
}

struct IsValidObserver {
  template <typename T>
  constexpr bool operator()(T const* ptr) const noexcept {
    return ptr != nullptr;
  }
};

}  // namespace base::allocator::dispatcher::internal

#endif  // BASE_ALLOCATOR_DISPATCHER_INTERNAL_TOOLS_H_
