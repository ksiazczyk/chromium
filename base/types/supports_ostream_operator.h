// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SupportsOstreamOperator concept
// summary: Defines an internal concept that detects whether a type can be streamed to std::ostream via operator<<.
// ---

#ifndef BASE_TYPES_SUPPORTS_OSTREAM_OPERATOR_H_
#define BASE_TYPES_SUPPORTS_OSTREAM_OPERATOR_H_

#include <ostream>
#include <type_traits>
#include <utility>

namespace base::internal {

// Detects whether using operator<< would work.
//
// Note that the above #include of <ostream> is necessary to guarantee
// consistent results here for basic types.
template <typename T>
concept SupportsOstreamOperator =
    requires(const T& t, std::ostream& os) { os << t; };

}  // namespace base::internal

#endif  // BASE_TYPES_SUPPORTS_OSTREAM_OPERATOR_H_
