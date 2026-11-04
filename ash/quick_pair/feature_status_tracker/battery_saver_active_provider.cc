// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: BatterySaverActiveProvider implementation
// summary: Implements a provider that reports whether battery saver mode is active by observing the PowerStatus and updating its enabled state on power changes.
// relations:
//   - implements /ash/quick_pair/feature_status_tracker/battery_saver_active_provider.h
// ---

#include "ash/quick_pair/feature_status_tracker/battery_saver_active_provider.h"

namespace ash {
namespace quick_pair {

BatterySaverActiveProvider::BatterySaverActiveProvider() {
  if (PowerStatus::IsInitialized()) {
    power_status_ = PowerStatus::Get();
    power_status_->AddObserver(this);
    SetEnabledAndInvokeCallback(
        /*new_value=*/power_status_->IsBatterySaverActive());
  }
}

BatterySaverActiveProvider::~BatterySaverActiveProvider() {
  if (PowerStatus::IsInitialized()) {
    power_status_->RemoveObserver(this);
  }
}

void BatterySaverActiveProvider::OnPowerStatusChanged() {
  SetEnabledAndInvokeCallback(
      /*new_value=*/power_status_ && power_status_->IsBatterySaverActive());
}

}  // namespace quick_pair
}  // namespace ash
