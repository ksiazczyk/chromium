// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Delete old versions header
// summary: Declares DeleteOldVersions, which removes files belonging to old Chrome versions and never deletes the active executables or their version directories.
// ---

#ifndef CHROME_INSTALLER_UTIL_DELETE_OLD_VERSIONS_H_
#define CHROME_INSTALLER_UTIL_DELETE_OLD_VERSIONS_H_

namespace base {
class FilePath;
}

namespace installer {

// Deletes files that belong to old versions of Chrome. chrome.exe,
// new_chrome.exe and their associated version directories are never deleted.
// Also, no file is deleted for a given version if a .exe or .dll file for that
// version is in use. Returns true if no files that belong to an old version of
// Chrome remain.
bool DeleteOldVersions(const base::FilePath& install_dir);

}  // namespace installer

#endif  // CHROME_INSTALLER_UTIL_DELETE_OLD_VERSIONS_H_
