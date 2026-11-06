// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Fake CrashRecoveryManager implementation
// summary: Implements the CrashRecoveryManager test double, storing the callback to invoke when pre-crash state restoration finishes.
// ---

#include "chromeos/ash/components/tether/fake_crash_recovery_manager.h"

namespace ash {

namespace tether {

FakeCrashRecoveryManager::FakeCrashRecoveryManager() = default;

FakeCrashRecoveryManager::~FakeCrashRecoveryManager() = default;

void FakeCrashRecoveryManager::RestorePreCrashStateIfNecessary(
    base::OnceClosure on_restoration_finished) {
  on_restoration_finished_callback_ = std::move(on_restoration_finished);
}

}  // namespace tether

}  // namespace ash
