// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GBM device deleter implementation
// summary: Implements the GbmDeviceDeleter functor that destroys a gbm_device via gbm_device_destroy.
// ---

#include "ui/gfx/linux/scoped_gbm_device.h"

namespace ui {

void GbmDeviceDeleter::operator()(gbm_device* device) {
  if (device)
    gbm_device_destroy(device);
}

}  // namespace ui
