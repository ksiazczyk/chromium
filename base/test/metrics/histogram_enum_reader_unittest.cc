// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Histogram enum reader unit tests
// summary: Sanity tests that read the Boolean enum from enums.xml and confirm that an unknown enum name yields no result.
// ---

#include "base/test/metrics/histogram_enum_reader.h"

#include <optional>

#include "testing/gtest/include/gtest/gtest.h"

namespace base {

TEST(HistogramEnumReaderTest, SanityChecks) {
  {
    // NOTE: This results in a dependency on the enums.xml file, but to
    // otherwise inject content would circumvent a lot of the logic of the
    // method and add additional complexity. "Boolean" is hopefully a pretty
    // stable enum.
    std::optional<HistogramEnumEntryMap> results =
        ReadEnumFromEnumsXml("Boolean");
    ASSERT_TRUE(results);
    EXPECT_EQ("False", results->at(0));
    EXPECT_EQ("True", results->at(1));
  }

  {
    std::optional<HistogramEnumEntryMap> results =
        ReadEnumFromEnumsXml("TheWorstNameForAnEnum");
    ASSERT_FALSE(results);
  }
}

}  // namespace base
