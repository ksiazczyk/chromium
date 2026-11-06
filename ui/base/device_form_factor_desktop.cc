// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Desktop implementation of device form factor
// summary: Returns DEVICE_FORM_FACTOR_DESKTOP unconditionally for platforms without a mobile form factor implementation.
// ---

#include "ui/base/device_form_factor.h"

namespace ui {

DeviceFormFactor GetDeviceFormFactor() {
  return DEVICE_FORM_FACTOR_DESKTOP;
}

}  // namespace ui
