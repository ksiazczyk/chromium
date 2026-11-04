// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Compile-time tests for IntegralConstantLike
// summary: Static-assert checks that the IntegralConstantLike concept accepts integral constants and rejects float, bool, plain int, and void types.
// ---

#include "base/numerics/integral_constant_like.h"

#include <stddef.h>

#include <type_traits>

namespace base {
namespace {

static_assert(IntegralConstantLike<std::integral_constant<size_t, 1>>);
static_assert(!IntegralConstantLike<std::integral_constant<float, 1.0f>>);
static_assert(!IntegralConstantLike<std::integral_constant<bool, true>>);
static_assert(!IntegralConstantLike<int>);
static_assert(!IntegralConstantLike<void>);

}  // namespace
}  // namespace base
