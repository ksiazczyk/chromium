// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: CBOR redaction utility unit tests
// summary: Unit test verifying that RedactValueAtPaths replaces values at matching CBOR paths while leaving other entries untouched.
// ---

#include "device/fido/cbor_util.h"

#include <string>
#include <utility>

#include "components/cbor/values.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace fido_cbor_util {

TEST(FidoCborUtilTest, RedactValueAtPaths) {
  cbor::Value::MapValue map;
  map.emplace("secret", "password");
  map.emplace("public", "hello");
  cbor::Value val(std::move(map));

  cbor::Value redacted = RedactValueAtPaths(val, Path("secret"));
  EXPECT_EQ(redacted.GetMap().at(cbor::Value("secret")).GetString(),
            "[redacted]");
  EXPECT_EQ(redacted.GetMap().at(cbor::Value("public")).GetString(), "hello");
}

}  // namespace fido_cbor_util
