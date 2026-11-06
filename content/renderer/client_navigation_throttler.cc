// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client navigation throttler implementation
// summary: Implements deferral and dispatch of client-side navigation callbacks, running them once all defer handles are released.
// ---

#include "content/renderer/client_navigation_throttler.h"

namespace content {

ClientNavigationThrottler::ClientNavigationThrottler() = default;
ClientNavigationThrottler::~ClientNavigationThrottler() {
  DispatchPendingCallbacks();
}

base::ScopedClosureRunner ClientNavigationThrottler::DeferNavigations() {
  ++defer_counter_;
  return base::ScopedClosureRunner(
      base::BindOnce(&ClientNavigationThrottler::UndeferNavigations,
                     weak_factory_.GetWeakPtr()));
}

void ClientNavigationThrottler::DispatchOrScheduleNavigation(
    base::OnceClosure navigation_start) {
  if (!defer_counter_) {
    std::move(navigation_start).Run();
    return;
  }
  deferred_navigations_.push_back(std::move(navigation_start));
}

void ClientNavigationThrottler::UndeferNavigations() {
  CHECK_GT(defer_counter_, 0);
  if (!--defer_counter_) {
    DispatchPendingCallbacks();
    deferred_navigations_.clear();
  }
}

void ClientNavigationThrottler::DispatchPendingCallbacks() {
  for (auto& item : deferred_navigations_) {
    std::move(item).Run();
  }
}

}  // namespace content
