// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test header fixture for rewrite_to_chrome_style gen tests
// summary: C++ header fixture in the gen test directory declaring a blink function and class, used as input for the rewrite_to_chrome_style Clang tool tests.
// ---

#ifndef GEN_THING_H_
#define GEN_THING_H_

namespace blink {
void genThing();

class GenClass {
  virtual void genMethod() {}
};
}

#endif  // GEN_THING_H_
