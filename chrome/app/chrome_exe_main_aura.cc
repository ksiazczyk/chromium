// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Aura executable main entry point
// summary: Main entry point for the Chromium executable on Aura-based platforms, forwarding arguments to ChromeMain.
// ---

#include "build/build_config.h"

// The entry point for all invocations of Chromium, browser and renderer. On
// windows, this does nothing but load chrome.dll and invoke its entry point in
// order to make it easy to update the app from GoogleUpdate. We don't need
// that extra layer with on linux.

extern "C" {
int ChromeMain(int argc, const char** argv);
}

int main(int argc, const char** argv) {
  return ChromeMain(argc, argv);
}
