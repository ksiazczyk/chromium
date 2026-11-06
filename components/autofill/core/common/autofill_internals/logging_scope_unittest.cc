// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test for LoggingScope serialization
// summary: Verifies that streaming a LoggingScope into a LogBuffer produces the expected JSON structure with scope attribute and log-entry class.
// ---

#include "components/autofill/core/common/autofill_internals/logging_scope.h"

#include <optional>

#include "base/json/json_writer.h"
#include "components/autofill/core/common/logging/log_buffer.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace autofill {

TEST(LoggingScope, Serialization) {
  LogBuffer buffer;
  buffer << LoggingScope::kContext;
  std::optional<std::string> json = base::WriteJson(*buffer.RetrieveResult());
  ASSERT_TRUE(json.has_value());
  EXPECT_EQ(R"({"attributes":{"class":"log-entry","scope":"Context"},)"
            R"("type":"element","value":"div"})",
            json.value());
}

}  // namespace autofill
