// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ChromeOS brand code map unit tests
// summary: Verifies GetRlzBrandCode returns enrollment-based variations for mapped codes and passes through unmapped codes.
// ---

#include "chrome/browser/google/google_brand_code_map_chromeos.h"

#include "testing/gtest/include/gtest/gtest.h"

using google_brand::chromeos::GetRlzBrandCode;

TEST(GoogleBrandCodeMapTest, GetRlzBrandCode) {
  // If the static brand code is in the map, |GetRlzBrandCode| returns a
  // variation based on the enrollment status and market segment.
  EXPECT_EQ("BMGD", GetRlzBrandCode("NPEC", std::nullopt));
  EXPECT_EQ("YETH", GetRlzBrandCode("NPEC", policy::MarketSegment::EDUCATION));
  EXPECT_EQ("XAWJ", GetRlzBrandCode("NPEC", policy::MarketSegment::ENTERPRISE));
  EXPECT_EQ("XAWJ", GetRlzBrandCode("NPEC", policy::MarketSegment::UNKNOWN));

  // If the static brand code is not in the map, |GetRlzBrandCode| always
  // returns the static brand code.
  EXPECT_EQ("AAAA", GetRlzBrandCode("AAAA", std::nullopt));
  EXPECT_EQ("AAAA", GetRlzBrandCode("AAAA", policy::MarketSegment::UNKNOWN));
  EXPECT_EQ("AAAA", GetRlzBrandCode("AAAA", policy::MarketSegment::EDUCATION));
  EXPECT_EQ("AAAA", GetRlzBrandCode("AAAA", policy::MarketSegment::ENTERPRISE));
}
