// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: DeviceInfoSyncService implementation
// summary: Implements the DeviceInfoSyncService keyed service interface, currently only defining its virtual destructor.
// ---

#include "components/sync_device_info/device_info_sync_service.h"

namespace syncer {

DeviceInfoSyncService::~DeviceInfoSyncService() = default;

}  // namespace syncer
