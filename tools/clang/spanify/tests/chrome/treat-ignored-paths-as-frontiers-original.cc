// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Spanify test input for ignored-path frontier handling
// summary: Original C++ test case with unsafe buffer use in a file excluded from rewriting, to check frontier behavior.
// ---

// Represents code that's excluded - i.e. not desirable to rewrite, even
// if it uses buffers unsafely.
#include "base/dummy_rewrite_bait_for_testing.h"

// Expected rewrite:
// ...(base::span<const unsigned char> arg) {
unsigned char UseBufferUnsafely(const unsigned char* arg) {
  // We disallow rewrites in the file in which this function is defined.
  //
  // TODO(crbug.com/419598098): figure out why this doesn't work.
  //
  // Expected rewrite:
  // return GetUnsafeChar(arg.subspan(1u));
  return GetUnsafeChar(arg + 1);
}
