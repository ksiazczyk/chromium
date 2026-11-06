// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows updater setup header
// summary: Declares the Setup entry point that installs the updater files and registry state on Windows.
// ---

#ifndef CHROME_UPDATER_WIN_SETUP_WIN_SETUP_H_
#define CHROME_UPDATER_WIN_SETUP_WIN_SETUP_H_

#include "chrome/updater/updater_scope.h"

namespace updater {

int Setup(UpdaterScope scope);

}  // namespace updater

#endif  // CHROME_UPDATER_WIN_SETUP_WIN_SETUP_H_
