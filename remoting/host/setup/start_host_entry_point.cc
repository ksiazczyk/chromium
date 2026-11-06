// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: start_host entry point
// summary: Executable main entry point that forwards to remoting::StartHostMain.
// ---

#include "remoting/host/setup/start_host_main.h"

int main(int argc, char** argv) {
  return remoting::StartHostMain(argc, argv);
}
