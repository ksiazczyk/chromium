// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Version string construction implementation
// summary: Builds the display version string, adding a ChromeOS commit position suffix and developer build details when applicable.
// ---

#include "base/version_info/version_string.h"

#include "base/version_info/version_info.h"
#include "build/build_config.h"

#if BUILDFLAG(IS_CHROMEOS)
#include "build/util/LASTCHANGE_commit_position.h"
#endif

namespace version_info {

std::string GetVersionStringWithModifier(const std::string& modifier) {
  std::string current_version;
  current_version += GetVersionNumber();
#if BUILDFLAG(IS_CHROMEOS) && CHROMIUM_COMMIT_POSITION_IS_MAIN
  // Adds the revision number as a suffix to the version number if the chrome
  // is built from the main branch.
  current_version += "-r" CHROMIUM_COMMIT_POSITION_NUMBER;
#endif
#if defined(USE_UNOFFICIAL_VERSION_NUMBER)
  current_version += " (Developer Build ";
  current_version += GetLastChange();
  current_version += " ";
  current_version += GetOSType();
  current_version += ")";
#endif  // USE_UNOFFICIAL_VERSION_NUMBER
  if (!modifier.empty()) {
    current_version += " " + modifier;
  }
  return current_version;
}

}  // namespace version_info
