// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ArcWindowObserver implementation
// summary: Implements the observer that tracks the ARC window count and stays active while ARC windows are open, blocking Doze mode.
// ---

#include "chrome/browser/ash/arc/idle_manager/arc_window_observer.h"

namespace arc {

ArcWindowObserver::ArcWindowObserver()
    : ThrottleObserver(kArcWindowObserverName) {}

void ArcWindowObserver::StartObserving(
    content::BrowserContext* context,
    const ObserverStateChangedCallback& callback) {
  ThrottleObserver::StartObserving(context, callback);

  if (auto* instance = ash::ArcWindowWatcher::instance()) {
    OnArcWindowCountChanged(instance->GetArcWindowCount());
    observation_.Observe(instance);
  }
}

ArcWindowObserver::~ArcWindowObserver() = default;

void ArcWindowObserver::StopObserving() {
  observation_.Reset();
  ThrottleObserver::StopObserving();
}

void ArcWindowObserver::OnArcWindowCountChanged(uint32_t count) {
  SetActive(count > 0);
}

void ArcWindowObserver::OnWillDestroyWatcher() {
  observation_.Reset();
}

}  // namespace arc
