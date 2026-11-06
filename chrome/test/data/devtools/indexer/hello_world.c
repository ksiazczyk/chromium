// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Hello world C test fixture
// summary: Minimal C program that prints Hello, World!, serving as test data in the DevTools indexer test directory.
// ---

#include <stdio.h>

int main(int argc, char* argv[]) {
  printf("Hello, World!\n");
  return 0;
}
