// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: No-trigraphs test
// summary: Small test verifying that concatenated question marks and equals signs are not treated as C trigraphs.
// ---

#include "base/strings/strcat.h"
#include "testing/gtest/include/gtest/gtest.h"

TEST(NoTrigraphs, Basic) {
  EXPECT_EQ("??=", base::StrCat({"?", "?", "="}));
}
