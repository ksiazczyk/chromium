// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EntryInfo struct for file and directory details
// summary: Defines the EntryInfo struct holding a file or directory path, its MIME type, and whether the entry is a directory.
// ---

#ifndef EXTENSIONS_BROWSER_ENTRY_INFO_H_
#define EXTENSIONS_BROWSER_ENTRY_INFO_H_

#include <string>

#include "base/files/file_path.h"

namespace extensions {

// Contains information about files and directories.
struct EntryInfo {
  EntryInfo(const base::FilePath& path,
            const std::string& mime_type,
            bool is_directory)
      : path(path), mime_type(mime_type), is_directory(is_directory) {}

  base::FilePath path;
  std::string mime_type;  // Useful only if is_directory = false.
  bool is_directory;
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_ENTRY_INFO_H_
