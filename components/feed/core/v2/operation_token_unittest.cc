// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for operation token
// summary: Tests that operation tokens are valid initially and become invalid after the operation is destroyed or reset, and that new tokens work after reset.
// ---

#include "components/feed/core/v2/operation_token.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace feed {

TEST(OperationToken, IsInitiallyValid) {
  OperationToken::Operation op;
  EXPECT_TRUE(op.Token());
}

TEST(OperationToken, NotValidAfterDestructor) {
  OperationToken token = OperationToken::MakeInvalid();
  {
    OperationToken::Operation op;
    token = op.Token();
    EXPECT_TRUE(token);
  }
  EXPECT_FALSE(token);
}

TEST(OperationToken, NotValidAfterReset) {
  OperationToken::Operation op;
  OperationToken token = op.Token();

  op.Reset();
  EXPECT_FALSE(token);
}

TEST(OperationToken, NewTokensAfterReset) {
  OperationToken::Operation op;
  OperationToken token = op.Token();
  op.Reset();
  token = op.Token();

  EXPECT_TRUE(token);
}

TEST(OperationToken, MakeInvalid) {
  EXPECT_FALSE(OperationToken::MakeInvalid());
}

}  // namespace feed
