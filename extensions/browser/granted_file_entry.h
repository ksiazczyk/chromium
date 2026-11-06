// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GrantedFileEntry struct
// summary: Declares the GrantedFileEntry struct holding the id, filesystem id and registered name of a file entry a renderer has been given access to.
// ---

#ifndef EXTENSIONS_BROWSER_GRANTED_FILE_ENTRY_H_
#define EXTENSIONS_BROWSER_GRANTED_FILE_ENTRY_H_

#include <string>

namespace extensions {

// Refers to a file entry that a renderer has been given access to.
struct GrantedFileEntry {
  GrantedFileEntry();
  ~GrantedFileEntry();

  std::string id;
  std::string filesystem_id;
  std::string registered_name;
};

}  // namespace extensions

#endif  // EXTENSIONS_BROWSER_GRANTED_FILE_ENTRY_H_
