// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ksadmin main entry point
// summary: Main entry point that delegates to the ksadmin application main function.
// ---

#include "chrome/updater/mac/keystone/ksadmin.h"

int main(int argc, const char* argv[]) {
  return updater::KSAdminAppMain(argc, argv);
}
