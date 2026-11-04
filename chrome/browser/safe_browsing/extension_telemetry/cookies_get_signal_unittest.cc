// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CookiesGetSignal unit tests
// summary: Unit tests for CookiesGetSignal verifying URL filename stripping and unique argument set ID concatenation.
// ---

#include "chrome/browser/safe_browsing/extension_telemetry/cookies_get_signal.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace safe_browsing {

namespace {

TEST(CookiesGetSignalTest, StripUrlCorrectly) {
  CookiesGetSignal signal = CookiesGetSignal(
      /*extension_id=*/"ext-0",
      /*name=*/"cookie-1",
      /*store_id=*/"store-1",
      /*url=*/"http://www.example.com/path1/path2/index.html?q=test&id=5");
  EXPECT_EQ(signal.url(), "http://www.example.com/path1/path2/");
}

TEST(CookiesGetSignalTest, ConcatFieldsWithArgs) {
  CookiesGetSignal signal = CookiesGetSignal(
      /*extension_id=*/"ext-0",
      /*name=*/"cookie-1",
      /*store_id=*/"store-1",
      /*url=*/"http://www.example.com/");
  EXPECT_EQ(signal.getUniqueArgSetId(),
            "cookie-1,store-1,http://www.example.com/");
}

TEST(CookiesGetSignalTest, ConcatFieldsWithDefaultArgs) {
  CookiesGetSignal signal = CookiesGetSignal(
      /*extension_id=*/"",
      /*name=*/"",
      /*store_id=*/"",
      /*url=*/"");
  EXPECT_EQ(signal.getUniqueArgSetId(), ",,");
}

}  // namespace

}  // namespace safe_browsing
