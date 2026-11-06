// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Me2Me native messaging host entry point
// summary: Small program entry point that forwards command-line arguments to the Me2Me native messaging host main function.
// ---

#include "remoting/host/setup/me2me_native_messaging_host_main.h"

int main(int argc, char** argv) {
  return remoting::Me2MeNativeMessagingHostMain(argc, argv);
}
