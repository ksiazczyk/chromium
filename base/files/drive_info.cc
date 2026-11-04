// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DriveInfo default implementations
// summary: Defines the default constructor, move operations and destructor for the base::DriveInfo class.
// ---

#include "base/files/drive_info.h"

namespace base {

DriveInfo::DriveInfo() = default;
DriveInfo::DriveInfo(DriveInfo&&) = default;
DriveInfo& DriveInfo::operator=(DriveInfo&&) = default;
DriveInfo::~DriveInfo() = default;

}  // namespace base
