// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IsIntCompatibleEnum C++ concept
// summary: Defines the IsIntCompatibleEnum concept, constraining templates to enum types whose underlying values fit within the range of an int.
// ---

#ifndef COMPONENTS_ORIGIN_GATING_CORE_CONCEPTS_H_
#define COMPONENTS_ORIGIN_GATING_CORE_CONCEPTS_H_

#include <concepts>
#include <type_traits>

#include "base/numerics/safe_conversions.h"

namespace origin_gating {

template <typename T>
concept IsIntCompatibleEnum =
    std::is_enum_v<T> &&
    base::kIsTypeInRangeForNumericType<int, std::underlying_type_t<T>>;

}  // namespace origin_gating

#endif  // COMPONENTS_ORIGIN_GATING_CORE_CONCEPTS_H_
