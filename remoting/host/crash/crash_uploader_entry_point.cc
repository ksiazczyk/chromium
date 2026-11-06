// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Entry point for the crash uploader executable
// summary: Provides the main function that forwards to the remoting crash uploader implementation.
// ---

#include "remoting/host/crash/crash_uploader_main.h"

int main(int argc, char** argv) {
  return remoting::CrashUploaderMain(argc, argv);
}
