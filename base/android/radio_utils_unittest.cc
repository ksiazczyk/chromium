// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for RadioUtils connection type
// summary: Verifies that the testing override makes RadioUtils return the configured radio connection type.
// ---

#include "base/android/radio_utils.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace base {

namespace android {

TEST(RadioUtilsTest, ConnectionType) {
  RadioUtils::OverrideForTesting radio_utils_test;

  radio_utils_test.SetConnectionTypeForTesting(RadioConnectionType::kUnknown);
  EXPECT_EQ(RadioConnectionType::kUnknown, RadioUtils::GetConnectionType());

  radio_utils_test.SetConnectionTypeForTesting(RadioConnectionType::kCell);
  EXPECT_EQ(RadioConnectionType::kCell, RadioUtils::GetConnectionType());

  radio_utils_test.SetConnectionTypeForTesting(RadioConnectionType::kWifi);
  EXPECT_EQ(RadioConnectionType::kWifi, RadioUtils::GetConnectionType());
}

}  // namespace android
}  // namespace base
