// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Protocol enum for Fast Pair variants
// summary: Declares the Protocol enum with the Fast Pair initial, retroactive and subsequent variants plus its stream output operator.
// relations:
//   - references /base/component_export.h
// ---

#ifndef ASH_QUICK_PAIR_COMMON_PROTOCOL_H_
#define ASH_QUICK_PAIR_COMMON_PROTOCOL_H_

#include <ostream>
#include "base/component_export.h"

namespace ash::quick_pair {

enum class Protocol {
  // Google Fast Pair
  kFastPairInitial = 0,
  kFastPairRetroactive = 1,
  kFastPairSubsequent = 2,
};

COMPONENT_EXPORT(QUICK_PAIR_COMMON)
std::ostream& operator<<(std::ostream& stream, Protocol protocol);

}  // namespace ash::quick_pair

#endif  // ASH_QUICK_PAIR_COMMON_PROTOCOL_H_
