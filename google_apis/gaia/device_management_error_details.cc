// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceManagementErrorDetails base class implementation
// summary: Provides the default constructors, destructor, and assignment operators for the abstract DeviceManagementErrorDetails base class.
// ---

#include "google_apis/gaia/device_management_error_details.h"

namespace gaia {

DeviceManagementErrorDetails::~DeviceManagementErrorDetails() = default;

DeviceManagementErrorDetails::DeviceManagementErrorDetails() = default;

DeviceManagementErrorDetails::DeviceManagementErrorDetails(
    const DeviceManagementErrorDetails&) = default;

DeviceManagementErrorDetails& DeviceManagementErrorDetails::operator=(
    const DeviceManagementErrorDetails&) = default;

}  // namespace gaia
