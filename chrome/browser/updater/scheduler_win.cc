// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows periodic task scheduling
// summary: Windows implementation of periodic tasks that checks updater health and wakes all updaters.
// ---

#include "chrome/browser/updater/scheduler.h"

#include <utility>

#include "base/functional/callback.h"

namespace updater {

void DoPeriodicTasks(base::RepeatingClosure /*prompt*/,
                     base::OnceClosure callback) {
  CheckUpdaterHealthAndWakeAllUpdaters(std::move(callback));
}

}  // namespace updater
