// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: PaginationModelTransitionWaiter implementation
// summary: Implements a test helper that runs a RunLoop until an ongoing pagination model transition ends.
// relations:
//   - implements /ash/app_list/views/pagination_model_transition_waiter.h
//   - depends_on /ash/public/cpp/pagination/pagination_model.h
// ---

#include "ash/app_list/views/pagination_model_transition_waiter.h"

#include <memory>

#include "ash/public/cpp/pagination/pagination_model.h"
#include "base/run_loop.h"

namespace ash {
PaginationModelTransitionWaiter::PaginationModelTransitionWaiter(
    PaginationModel* pagination_model)
    : pagination_model_(pagination_model) {
  scoped_observation_.Observe(pagination_model);
}

PaginationModelTransitionWaiter::~PaginationModelTransitionWaiter() = default;

void PaginationModelTransitionWaiter::Wait() {
  if (!pagination_model_->has_transition()) {
    return;
  }

  run_loop_ = std::make_unique<base::RunLoop>();
  run_loop_->Run();
}

void PaginationModelTransitionWaiter::TransitionEnded() {
  run_loop_->QuitWhenIdle();
}

}  // namespace ash
