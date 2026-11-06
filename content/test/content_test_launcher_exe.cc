// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Content test launcher executable entry point
// summary: Minimal main function that forwards arguments to ContentTestMain to build the content test launcher executable.
// ---

extern "C" int ContentTestMain(int argc, const char** argv);

int main(int argc, const char** argv) {
  return ContentTestMain(argc, argv);
}
