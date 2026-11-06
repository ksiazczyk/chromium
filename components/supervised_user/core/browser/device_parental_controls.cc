// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Device parental controls base implementation
// summary: Implements subscription and notification plumbing for the device parental controls interface.
// ---

#include "components/supervised_user/core/browser/device_parental_controls.h"

#include <utility>

#include "base/callback_list.h"

namespace supervised_user {

DeviceParentalControls::DeviceParentalControls() = default;
DeviceParentalControls::~DeviceParentalControls() = default;

base::CallbackListSubscription DeviceParentalControls::Subscribe(
    Callback callback) {
  callback.Run(*this);
  return subscriber_list_.Add(std::move(callback));
}

void DeviceParentalControls::NotifySubscribers() {
  subscriber_list_.Notify(*this);
}
}  // namespace supervised_user
