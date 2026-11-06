// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: String helper C++ implementation
// summary: Implements addStringFromCxx, which appends a C++-added suffix to a given string, as a helper for Swift interop tests.
// ---

#include "ios/chrome/test/swift_interop/std/string_helper.h"

std::string addStringFromCxx(std::string a) {
  return a + " string added in C++!";
}
