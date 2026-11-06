// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Remote session info tool entry point
// summary: Minimal main entry point that delegates to RemoteSessionInfoMain for the remote session info command-line tool.
// ---

#include "remoting/host/linux/remote_session_info_main.h"

int main(int argc, char** argv) {
  return remoting::RemoteSessionInfoMain(argc, argv);
}
