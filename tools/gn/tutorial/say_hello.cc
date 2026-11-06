// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: say_hello.cc
// summary: Example program that calls Hello() to greet one person or two people depending on whether TWO_PEOPLE is defined.
// ---

#include "tools/gn/tutorial/hello.h"

int main() {
#if defined(TWO_PEOPLE)
  Hello("Bill", "Joy");
#else
  Hello("everyone");
#endif
  return 0;
}
