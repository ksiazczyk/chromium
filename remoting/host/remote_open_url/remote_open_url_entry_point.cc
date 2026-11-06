// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote open URL entry point
// summary: Executable entry point that forwards command line arguments to the RemoteOpenUrlMain function.
// ---

#include "remoting/host/remote_open_url/remote_open_url_main.h"

int main(int argc, char** argv) {
  return remoting::RemoteOpenUrlMain(argc, argv);
}
