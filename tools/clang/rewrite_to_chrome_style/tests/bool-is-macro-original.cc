// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Original input for bool-is-macro test
// summary: Blink-style input for the bool-is-macro test, checking renaming when bool is defined as a macro on Linux.
// ---

namespace blink {

// On Linux, bool can be a macro. Make sure this case is handled correctly.
#define bool bool

bool functionReturningBool(char* inputData) {
  return inputData[0];
}

}  // namespace blink
