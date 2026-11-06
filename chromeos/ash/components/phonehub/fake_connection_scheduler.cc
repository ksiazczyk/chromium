// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Fake connection scheduler implementation
// summary: Implements the fake ConnectionScheduler that counts ScheduleConnectionNow calls instead of scheduling real connections.
// ---

#include "chromeos/ash/components/phonehub/fake_connection_scheduler.h"

namespace ash::phonehub {

FakeConnectionScheduler::FakeConnectionScheduler() = default;
FakeConnectionScheduler::~FakeConnectionScheduler() = default;

void FakeConnectionScheduler::ScheduleConnectionNow(
    DiscoveryEntryPoint entry_point) {
  ++num_schedule_connection_now_calls_;
}

}  // namespace ash::phonehub
