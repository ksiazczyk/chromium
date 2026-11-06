// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: POSIX installer header
// summary: Declares the install directory permissions mask constant shared by POSIX installer code.
// ---

#ifndef CHROME_ENTERPRISE_COMPANION_INSTALLER_POSIX_H_
#define CHROME_ENTERPRISE_COMPANION_INSTALLER_POSIX_H_

#include "base/files/file_path.h"

namespace enterprise_companion {

extern const int kInstallDirPermissionsMask;

}  // namespace enterprise_companion

#endif  // CHROME_ENTERPRISE_COMPANION_INSTALLER_POSIX_H_
