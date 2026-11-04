// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SameAsAny concept for matching a type against a list
// summary: Defines a C++20 concept in base that evaluates true when a type T is identical to any of the supplied types.
// ---

#ifndef BASE_TYPES_SAME_AS_ANY_H_
#define BASE_TYPES_SAME_AS_ANY_H_

#include <concepts>

namespace base {

// A concept that is true when `T` is any of the subsequent types.
template <typename T, typename... Ts>
concept SameAsAny = (std::same_as<T, Ts> || ...);

}  // namespace base

#endif  // BASE_TYPES_SAME_AS_ANY_H_
