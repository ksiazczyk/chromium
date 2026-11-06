// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux updater entry point
// summary: Minimal main function that forwards command-line arguments to the updater's UpdaterMain routine.
// ---

#include "chrome/updater/updater.h"

int main(int argc, const char* argv[]) {
  return updater::UpdaterMain(argc, argv);
}
