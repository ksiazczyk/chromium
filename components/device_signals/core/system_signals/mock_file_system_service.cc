// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock file system service implementation
// summary: Provides the default constructor and destructor for the MockFileSystemService test double.
// ---

#include "components/device_signals/core/system_signals/mock_file_system_service.h"

namespace device_signals {

MockFileSystemService::MockFileSystemService() = default;
MockFileSystemService::~MockFileSystemService() = default;

}  // namespace device_signals
