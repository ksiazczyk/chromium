// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: FakeOneShotTimer implementation
// summary: Implements FakeOneShotTimer, a mock one-shot timer that notifies its creator with an ID when it is destroyed.
// ---

#include "chromeos/ash/components/timer_factory/fake_one_shot_timer.h"

#include "base/functional/callback.h"

namespace ash::timer_factory {

FakeOneShotTimer::FakeOneShotTimer(
    base::OnceCallback<void(const base::UnguessableToken&)> destructor_callback)
    : base::MockOneShotTimer(),
      destructor_callback_(std::move(destructor_callback)),
      id_(base::UnguessableToken::Create()) {}

FakeOneShotTimer::~FakeOneShotTimer() {
  std::move(destructor_callback_).Run(id_);
}

}  // namespace ash::timer_factory
