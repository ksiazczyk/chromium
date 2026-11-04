// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Quick Insert case transformation declarations
// summary: Declares functions that transform text to lower, upper, and title case for the Quick Insert feature.
// relations:
//   - depends_on /ash/ash_export.h
// ---

#ifndef ASH_QUICK_INSERT_QUICK_INSERT_TRANSFORM_CASE_H_
#define ASH_QUICK_INSERT_QUICK_INSERT_TRANSFORM_CASE_H_

#include <string>
#include <string_view>

#include "ash/ash_export.h"

namespace ash {

ASH_EXPORT std::u16string QuickInsertTransformToLowerCase(
    std::u16string_view str);

ASH_EXPORT std::u16string QuickInsertTransformToUpperCase(
    std::u16string_view str);

ASH_EXPORT std::u16string QuickInsertTransformToTitleCase(
    std::u16string_view str);

}  // namespace ash

#endif  // ASH_QUICK_INSERT_QUICK_INSERT_TRANSFORM_CASE_H_
