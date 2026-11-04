// Copyright 2011 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: POSIX no-op implementation of HighResolutionTimerManager
// summary: Provides empty POSIX implementations of the high-resolution timer manager methods, since POSIX platforms need no special system timer handling.
// ---

#include "base/timer/hi_res_timer_manager.h"

// On POSIX we don't need to do anything special with the system timer.

namespace base {

HighResolutionTimerManager::HighResolutionTimerManager()
    : hi_res_clock_available_(false) {}

HighResolutionTimerManager::~HighResolutionTimerManager() = default;

void HighResolutionTimerManager::OnBatteryPowerStatusChange(
    PowerStateObserver::BatteryPowerStatus battery_power_status) {}

void HighResolutionTimerManager::UseHiResClock(bool use) {}

}  // namespace base
