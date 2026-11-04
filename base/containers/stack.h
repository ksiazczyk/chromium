// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: base::stack alias backed by circular_deque
// summary: Defines base::stack as std::stack with base::circular_deque as the default underlying container.
// ---

#ifndef BASE_CONTAINERS_STACK_H_
#define BASE_CONTAINERS_STACK_H_

#include <stack>

#include "base/containers/circular_deque.h"

namespace base {

// Provides a definition of base::stack that's like std::stack but uses a
// base::circular_deque instead of std::deque. Since std::stack is just a
// wrapper for an underlying type, we can just provide a typedef for it that
// defaults to the base circular_deque.
template <class T, class Container = circular_deque<T>>
using stack = std::stack<T, Container>;

}  // namespace base

#endif  // BASE_CONTAINERS_STACK_H_
