// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Enum traits unit tests
// summary: Tests that CheckedCastToEnum returns in-range enum values and rejects out-of-range integers.
// ---

#include "chrome/updater/enum_traits.h"

#include <ostream>

#include "testing/gtest/include/gtest/gtest.h"

namespace updater {

enum class MyEnum {
  kVal1 = -1,
  kVal2 = 0,
  kVal3 = 1,
};

template <>
struct EnumTraits<MyEnum> {
  static constexpr MyEnum first_elem = MyEnum::kVal1;
  static constexpr MyEnum last_elem = MyEnum::kVal3;
};

TEST(Util, CheckedIntegralToEnum) {
  EXPECT_EQ(MyEnum::kVal1, *CheckedCastToEnum<MyEnum>(-1));
  EXPECT_EQ(MyEnum::kVal2, *CheckedCastToEnum<MyEnum>(0));
  EXPECT_EQ(MyEnum::kVal3, *CheckedCastToEnum<MyEnum>(1));
  EXPECT_EQ(CheckedCastToEnum<MyEnum>(-2), std::nullopt);
  EXPECT_EQ(CheckedCastToEnum<MyEnum>(2), std::nullopt);
}

}  // namespace updater
