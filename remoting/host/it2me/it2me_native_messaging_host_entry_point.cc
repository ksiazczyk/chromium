// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: It2Me native messaging host entry point
// summary: Provides the main entry point that runs the It2Me native messaging host main routine.
// ---

#include "remoting/host/it2me/it2me_native_messaging_host_main.h"

int main(int argc, char** argv) {
  return remoting::It2MeNativeMessagingHostMain(argc, argv);
}
