// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: ARC mount provider unit tests
// summary: Contains a basic construct-and-destruct smoke test for the ArcMountProvider class.
// ---

#include "testing/gtest/include/gtest/gtest.h"

namespace arc {

class ArcMountProviderTest : public testing::Test {
 public:
  ArcMountProviderTest() = default;

  ArcMountProviderTest(const ArcMountProviderTest&) = delete;
  ArcMountProviderTest& operator=(const ArcMountProviderTest&) = delete;

  ~ArcMountProviderTest() override = default;
};

TEST_F(ArcMountProviderTest, ConstructDestruct) {}

}  // namespace arc
