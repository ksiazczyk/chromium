// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CORS exempt headers unit tests
// summary: Unit tests verifying that known headers like CAST-CERT and Authorization are CORS exempt while unknown ones are not.
// ---

#include "chromecast/common/cors_exempt_headers.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace chromecast {
namespace {

TEST(CorsExemptHeadersTest, IsCorsExemptHeader) {
  EXPECT_TRUE(IsCorsExemptHeader("CAST-CERT"));
  EXPECT_TRUE(IsCorsExemptHeader("Authorization"));
  EXPECT_FALSE(IsCorsExemptHeader("TEST-HEADER"));
}

}  // namespace
}  // namespace chromecast
