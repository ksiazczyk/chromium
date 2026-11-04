// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Described unit tests
// summary: GTest suite verifying that Described holds an error and description and that descriptions can be chained via Into.
// ---

#include "chrome/browser/ash/borealis/infra/described.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace borealis {
namespace {

TEST(DescribedTest, HoldsAnError) {
  Described<int> d(27, "twenty seven");
  EXPECT_EQ(d.error(), 27);
}

TEST(DescribedTest, HoldsADescription) {
  Described<int> d(27, "twenty seven");
  EXPECT_EQ(d.description(), "twenty seven");
}

TEST(DescribedTest, CanChainDescriptions) {
  struct Foo {};
  struct Bar {};

  Described<Foo> f(Foo{}, "foo");
  Described<Bar> b = f.Into(Bar{}, "bar");

  EXPECT_EQ(b.description(), "bar: foo");
}

}  // namespace
}  // namespace borealis
