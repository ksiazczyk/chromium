// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: InstallWarning unit tests
// summary: Unit test verifying that InstallWarning copies its message, key, and specific values from string views before the source data changes.
// ---

#include "extensions/common/install_warning.h"

#include <string>
#include <string_view>

#include "testing/gtest/include/gtest/gtest.h"

namespace extensions {

TEST(InstallWarningTest, CopiesStringViews) {
  std::string values = "messagekeyspecific";

  InstallWarning warning(std::string_view(values).substr(0, 7),
                         std::string_view(values).substr(7, 3),
                         std::string_view(values).substr(10));
  values.assign(values.size(), 'x');

  EXPECT_EQ("message", warning.message);
  EXPECT_EQ("key", warning.key);
  EXPECT_EQ("specific", warning.specific);
}

}  // namespace extensions
