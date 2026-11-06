// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: No-op device parental controls implementation
// summary: Provides a default DeviceParentalControls implementation in which all device-level parental control features are disabled.
// ---

#include "components/supervised_user/core/browser/device_parental_controls_noop_impl.h"

#include "base/callback_list.h"

namespace supervised_user {

DeviceParentalControlsNoOpImpl::DeviceParentalControlsNoOpImpl() = default;
DeviceParentalControlsNoOpImpl::~DeviceParentalControlsNoOpImpl() = default;

bool DeviceParentalControlsNoOpImpl::IsWebFilteringEnabled() const {
  return false;
}

bool DeviceParentalControlsNoOpImpl::IsIncognitoModeDisabled() const {
  return false;
}

bool DeviceParentalControlsNoOpImpl::IsSafeSearchForced() const {
  return false;
}

bool DeviceParentalControlsNoOpImpl::IsEnabled() const {
  return false;
}
}  // namespace supervised_user
