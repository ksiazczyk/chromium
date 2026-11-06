// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Stub implementation of PowerSaveBlocker
// summary: No-op stub implementation of the device PowerSaveBlocker delegate and constructor, used on platforms without a platform-specific power save blocker.
// ---

#include "services/device/wake_lock/power_save_blocker/power_save_blocker.h"

#include "base/memory/ref_counted.h"
#include "base/task/sequenced_task_runner.h"
#include "base/task/single_thread_task_runner.h"

namespace device {

class PowerSaveBlocker::Delegate {
 public:
  Delegate() = default;

  Delegate(const Delegate&) = delete;
  Delegate& operator=(const Delegate&) = delete;

  ~Delegate() = default;
};

PowerSaveBlocker::PowerSaveBlocker(
    mojom::WakeLockType type,
    mojom::WakeLockReason reason,
    const std::string& description,
    scoped_refptr<base::SequencedTaskRunner> ui_task_runner)
    : delegate_(ui_task_runner) {}

PowerSaveBlocker::~PowerSaveBlocker() {}

}  // namespace device
