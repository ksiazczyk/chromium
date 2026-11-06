// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Host process entry point
// summary: Defines the main() entry point that forwards arguments to remoting::HostMain for the remoting host.
// ---

#include "remoting/host/host_main.h"

int main(int argc, char** argv) {
  return remoting::HostMain(argc, argv);
}
