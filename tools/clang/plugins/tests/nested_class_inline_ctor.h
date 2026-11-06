// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Nested class inline constructor test header
// summary: Test header with a nested class having inline constructor and destructor bodies, referencing crbug.com/136863.
// ---

#ifndef NESTED_CLASS_INLINE_CTOR_H_
#define NESTED_CLASS_INLINE_CTOR_H_

#include <string>
#include <vector>

// See crbug.com/136863.

class Foo {
  class Bar {
    Bar() {}
    ~Bar() {}

    std::vector<std::string> a;
  };
};

#endif  // NESTED_CLASS_INLINE_CTOR_H_
