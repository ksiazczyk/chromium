// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Core runtime Starboard main entry point
// summary: C++ main function that delegates to CoreRuntimeStarboardMain to start the Cast core runtime on Starboard platforms.
// ---

#include "chromecast/cast_core/cast_starboard_runtime_main.h"

int main(int argc, const char** argv) {
  return CoreRuntimeStarboardMain(argc, argv);
}
