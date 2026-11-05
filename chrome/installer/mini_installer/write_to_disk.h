// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WriteToDisk helper header for the mini installer
// summary: Declares the mini_installer WriteToDisk function that writes a memory range to a given path and preserves the Windows last-error code on failure.
// ---

#ifndef CHROME_INSTALLER_MINI_INSTALLER_WRITE_TO_DISK_H_
#define CHROME_INSTALLER_MINI_INSTALLER_WRITE_TO_DISK_H_

namespace mini_installer {

struct MemoryRange;

// Writes `data` to disk at `full_path`. Returns false and leaves the Windows
// last-error code in tact in case of error.
bool WriteToDisk(const MemoryRange& data, const wchar_t* full_path);

}  // namespace mini_installer

#endif  // CHROME_INSTALLER_MINI_INSTALLER_WRITE_TO_DISK_H_
