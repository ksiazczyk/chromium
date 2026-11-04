// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tab observation strategy implementation
// summary: Implements vote tallying for per-surface screenshot and page content extraction policies, combining votes with max and locking them before queries.
// ---

#include "chrome/browser/actor/tab_observation_strategy.h"

#include <algorithm>
#include <utility>

#include "base/check.h"

namespace actor {

TabObservationStrategy::TabObservationStrategy() = default;

TabObservationStrategy::TabObservationStrategy(TabObservationStrategy&&) =
    default;

TabObservationStrategy& TabObservationStrategy::operator=(
    TabObservationStrategy&&) = default;

TabObservationStrategy::~TabObservationStrategy() = default;

void TabObservationStrategy::VoteForScreenshot(
    ActorSurfaceHandle actor_surface_handle,
    ScreenshotPolicy policy) {
  CHECK(!locked_);
  auto [it, inserted] = screenshot_votes_.emplace(actor_surface_handle, policy);
  if (!inserted) {
    it->second = std::max(it->second, policy);
  }
}

void TabObservationStrategy::VoteForPageContentExtraction(
    ActorSurfaceHandle actor_surface_handle,
    PageContentExtractionPolicy policy) {
  CHECK(!locked_);
  auto [it, inserted] = extraction_votes_.emplace(actor_surface_handle, policy);
  if (!inserted) {
    it->second = std::max(it->second, policy);
  }
}

void TabObservationStrategy::Lock() {
  locked_ = true;
}

ScreenshotPolicy TabObservationStrategy::GetScreenshotPolicy(
    ActorSurfaceHandle actor_surface_handle) const {
  CHECK(locked_);
  auto it = screenshot_votes_.find(actor_surface_handle);
  if (it != screenshot_votes_.end()) {
    return it->second;
  }
  return ScreenshotPolicy::kRequested;
}

PageContentExtractionPolicy
TabObservationStrategy::GetPageContentExtractionPolicy(
    ActorSurfaceHandle actor_surface_handle) const {
  CHECK(locked_);
  auto it = extraction_votes_.find(actor_surface_handle);
  if (it != extraction_votes_.end()) {
    return it->second;
  }
  return PageContentExtractionPolicy::kRequested;
}

}  // namespace actor
