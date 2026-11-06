// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Main entry trampoline for the iOS content shell
// summary: Minimal main entry point that forwards command-line arguments to ContentAppMain for the iOS content shell app.
// ---

extern "C" int ContentAppMain(int argc, char* argv[]);

int main(int argc, char* argv[]) {
  return ContentAppMain(argc, argv);
}
