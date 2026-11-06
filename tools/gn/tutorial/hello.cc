// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: hello.cc
// summary: Implements the Hello() greeting functions, including a two-name overload that is compiled only when TWO_PEOPLE is defined.
// ---

#include "tools/gn/tutorial/hello.h"

#include <stdio.h>

void Hello(const char* who) {
  printf("Hello, %s.\n", who);
}

#if defined(TWO_PEOPLE)
void Hello(const char* one, const char* two) {
  printf("Hello, %s and %s.\n", one, two);
}
#endif
