// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Umbrella header for the safe math library
// summary: Umbrella header that re-exports the checked math, clamped math, and safe conversions public headers as a single safe math include.
// ---

#ifndef BASE_NUMERICS_SAFE_MATH_H_
#define BASE_NUMERICS_SAFE_MATH_H_

#include "base/numerics/checked_math.h"      // IWYU pragma: export
#include "base/numerics/clamped_math.h"      // IWYU pragma: export
#include "base/numerics/safe_conversions.h"  // IWYU pragma: export

#endif  // BASE_NUMERICS_SAFE_MATH_H_
