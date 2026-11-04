// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: iOS implementation of GetFileDriveInfo
// summary: iOS stub of GetFileDriveInfo that reports no seek penalty and leaves the other drive information fields unset.
// ---

#include "base/files/drive_info.h"

namespace base {

std::optional<DriveInfo> GetFileDriveInfo(const FilePath& file_path) {
  DriveInfo info;
  info.has_seek_penalty = false;
  return info;
}

}  // namespace base
