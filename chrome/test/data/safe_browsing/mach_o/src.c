// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: C source for the Mach-O test binaries
// summary: Minimal C program compiled into the 32-bit, 64-bit, and fat test executables and dylibs.
// ---

int DoAThing() {
  return 42;
}

int main() {
  return 0;
}
