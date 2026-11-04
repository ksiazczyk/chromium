// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Provided file system observer implementation
// summary: Implements the Change struct of the provided file system observer, holding an entry path and change type.
// ---

#include "chrome/browser/ash/file_system_provider/provided_file_system_observer.h"

namespace ash::file_system_provider {

ProvidedFileSystemObserver::Change::Change(
    base::FilePath entry_path,
    storage::WatcherManager::ChangeType change_type)
    : entry_path(entry_path), change_type(change_type) {}

ProvidedFileSystemObserver::Change::Change(Change&&) = default;

ProvidedFileSystemObserver::Change::~Change() = default;

}  // namespace ash::file_system_provider
