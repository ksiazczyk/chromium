// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows updater uninstall header
// summary: Declares the Uninstall and UninstallCandidate entry points for removing the updater on Windows.
// ---

#ifndef CHROME_UPDATER_WIN_SETUP_UNINSTALL_H_
#define CHROME_UPDATER_WIN_SETUP_UNINSTALL_H_

#include "chrome/updater/updater_scope.h"

namespace updater {

int Uninstall(UpdaterScope scope);

int UninstallCandidate(UpdaterScope scope);

}  // namespace updater

#endif  // CHROME_UPDATER_WIN_SETUP_UNINSTALL_H_
