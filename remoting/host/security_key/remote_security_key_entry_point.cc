// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote security key executable entry point
// summary: Provides the main() entry point that forwards to remoting::RemoteSecurityKeyMain for the remote_security_key executable.
// ---

#include "remoting/host/security_key/remote_security_key_main.h"

int main(int argc, char** argv) {
  return remoting::RemoteSecurityKeyMain(argc, argv);
}
