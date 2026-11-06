// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Chrome Crashpad handler entry point
// summary: Minimal main entry point that forwards command-line arguments to CrashpadHandlerMain for the Chrome Crashpad handler executable.
// ---

// Forward declare this for macOS (it's only defined by crashpad on Android.)
extern "C" int CrashpadHandlerMain(int argc, char* argv[]);

int main(int argc, char* argv[]) {
  return CrashpadHandlerMain(argc, argv);
}
