// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Removable device constants definitions
// summary: Defines shared constants for removable device identification, including device ID prefixes and the DCIM directory name.
// ---

#include "build/build_config.h"
#include "components/storage_monitor/removable_device_constants.h"

namespace storage_monitor {

const char kFSUniqueIdPrefix[] = "UUID:";
const char kVendorModelSerialPrefix[] = "VendorModelSerial:";

#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
const char kVendorModelVolumeStoragePrefix[] = "VendorModelVolumeStorage:";
#endif

const base::FilePath::CharType kDCIMDirectoryName[] = FILE_PATH_LITERAL("DCIM");

}  // namespace storage_monitor
