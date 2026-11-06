// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Updater main entry point
// summary: Minimal entry point that forwards command-line arguments to the updater's UpdaterMain function.
// ---

#include "chrome/updater/updater.h"

int main(int argc, const char* argv[]) {
  return updater::UpdaterMain(argc, argv);
}
