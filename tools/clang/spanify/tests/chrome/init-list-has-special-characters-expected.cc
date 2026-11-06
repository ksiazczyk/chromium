// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Initializer list with special characters expected output
// summary: Expected spanify output rewriting a const char* array initializer containing special characters into a std::to_array call.
// ---

#include <array>

void fct() {
  // Expected rewrite:
  // auto buf = std::to_array<const char*>({
  //     "\\,",
  //     "+++",
  //     "%%%2C",
  //     "@",
  //     "<empty>",
  //     ":::",
  // });
  auto buf = std::to_array<const char*>({
      "\\,",
      "+++",
      "%%%2C",
      "@",
      "<empty>",
      ":::",
  });
  int index = 0;
  buf[index] = nullptr;
}
