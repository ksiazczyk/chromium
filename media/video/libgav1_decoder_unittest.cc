// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Libgav1 decoder smoke test
// summary: Unit test that initializes the libgav1 AV1 decoder with default settings and verifies initialization succeeds.
// ---

#include "testing/gtest/include/gtest/gtest.h"
#include "third_party/libgav1/src/src/gav1/decoder.h"

namespace {

TEST(Libgav1DecoderTest, SmokeTest) {
  libgav1::Decoder decoder;
  libgav1::DecoderSettings settings;
  EXPECT_EQ(decoder.Init(&settings), libgav1::kStatusOk);
}

}  // namespace
