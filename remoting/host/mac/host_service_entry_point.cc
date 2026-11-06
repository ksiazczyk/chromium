// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Host service entry point
// summary: Entry point that forwards main() to the Me2Me host service main routine for the macOS host service binary.
// ---

#include "remoting/host/mac/host_service_main.h"

int main(int argc, char** argv) {
  return remoting::Me2MeHostServiceMain(argc, argv);
}
