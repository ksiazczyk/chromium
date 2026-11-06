// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit test for default install directory
// summary: Verifies that the default install directory resolves to a non-empty path.
// ---

#include "remoting/host/installer/win/setup/installer_constants.h"

#include "base/files/file_path.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace remoting::installer {

TEST(InstallerConstantsTest, GetDefaultInstallDir_NotEmpty) {
  base::FilePath install_dir = GetDefaultInstallDir();
  EXPECT_FALSE(install_dir.empty());
}

}  // namespace remoting::installer
