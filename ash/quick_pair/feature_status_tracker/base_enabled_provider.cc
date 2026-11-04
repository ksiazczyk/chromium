// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BaseEnabledProvider implementation
// summary: Implements the BaseEnabledProvider class that stores an enabled flag and invokes a registered callback whenever the enabled state changes.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/base_enabled_provider.h
//   - depends_on /base/functional/callback.h
// ---

#include "ash/quick_pair/feature_status_tracker/base_enabled_provider.h"

#include "base/functional/callback.h"

namespace ash {
namespace quick_pair {

BaseEnabledProvider::BaseEnabledProvider() = default;

BaseEnabledProvider::~BaseEnabledProvider() = default;

bool BaseEnabledProvider::is_enabled() {
  return is_enabled_;
}

void BaseEnabledProvider::SetCallback(
    base::RepeatingCallback<void(bool)> callback) {
  callback_ = std::move(callback);
}

void BaseEnabledProvider::SetEnabledAndInvokeCallback(bool new_value) {
  if (is_enabled_ == new_value)
    return;

  is_enabled_ = new_value;

  if (callback_)
    callback_.Run(new_value);
}

}  // namespace quick_pair
}  // namespace ash
