// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Migrate host entry point
// summary: Provides the main() entry point that delegates to remoting::MigrateHostMain for the Linux host migration tool.
// ---

#include "remoting/host/linux/migrate_host_main.h"

int main(int argc, char** argv) {
  return remoting::MigrateHostMain(argc, argv);
}
