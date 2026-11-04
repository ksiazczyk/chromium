// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: FakeLinuxXdgWrapper implementation
// summary: Implements a fake Linux XDG wrapper that records desktop menu installs instead of modifying the operating system during tests.
// ---

#include "chrome/browser/shortcuts/fake_linux_xdg_wrapper.h"

#include <stdlib.h>

#include "base/files/file_path.h"

namespace shortcuts {

FakeLinuxXdgWrapper::FakeLinuxXdgWrapper() = default;
FakeLinuxXdgWrapper::~FakeLinuxXdgWrapper() = default;

int FakeLinuxXdgWrapper::XdgDesktopMenuInstall(
    const base::FilePath& desktop_file) {
  installs_.push_back(desktop_file);
  return EXIT_SUCCESS;
}

}  // namespace shortcuts
