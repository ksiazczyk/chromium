// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Expected output for bool-is-macro test
// summary: Expected Chrome-style output of the bool-is-macro test, verifying renaming works when bool is a macro on Linux.
// ---

namespace blink {

// On Linux, bool can be a macro. Make sure this case is handled correctly.
#define bool bool

bool FunctionReturningBool(char* input_data) {
  return input_data[0];
}

}  // namespace blink
