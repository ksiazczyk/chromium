// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TimeOfDay test helper declaration
// summary: Declares ToTimeToday, which converts a TimeOfDay to today's time and asserts via gtest on failure, a behavior intended only for tests.
// ---

#ifndef ASH_TEST_TIME_OF_DAY_TEST_UTIL_H_
#define ASH_TEST_TIME_OF_DAY_TEST_UTIL_H_

#include "ash/system/time/time_of_day.h"
#include "base/time/time.h"

namespace ash {

// Same as `TimeOfDay::ToTimeToday()` except triggers a gtest assertion failure
// if the conversion fails. This behavior is only acceptable in tests; failures
// must be handled gracefully in the field.
base::Time ToTimeToday(const TimeOfDay& time_of_day);

}  // namespace ash

#endif  // ASH_TEST_TIME_OF_DAY_TEST_UTIL_H_
