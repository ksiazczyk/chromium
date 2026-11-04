// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake child process tuning delegate implementation
// summary: Implements a fake child process tuning delegate that records battery saver mode state into a boolean flag for tests.
// ---

#include "chrome/browser/performance_manager/test_support/fake_child_process_tuning_delegate.h"

namespace performance_manager {

FakeChildProcessTuningDelegate::FakeChildProcessTuningDelegate(
    bool* child_process_tuning_enabled)
    : child_process_tuning_enabled_(child_process_tuning_enabled) {}

FakeChildProcessTuningDelegate::~FakeChildProcessTuningDelegate() = default;

void FakeChildProcessTuningDelegate::SetBatterySaverModeForAllChildProcessHosts(
    bool enabled) {
  *child_process_tuning_enabled_ = enabled;
}

}  // namespace performance_manager
