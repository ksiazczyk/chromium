// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScreenlockMonitorSource implementation (source.cc)
// summary: Implements ScreenlockMonitorSource::ProcessScreenlockEvent, forwarding screen lock and unlock events to the process-wide ScreenlockMonitor.
// ---

#include "content/browser/screenlock_monitor/screenlock_monitor_source.h"

#include "content/browser/screenlock_monitor/screenlock_monitor.h"

namespace content {

ScreenlockMonitorSource::ScreenlockMonitorSource() = default;
ScreenlockMonitorSource::~ScreenlockMonitorSource() = default;

// static
void ScreenlockMonitorSource::ProcessScreenlockEvent(ScreenlockEvent event_id) {
  ScreenlockMonitor* monitor = ScreenlockMonitor::Get();
  if (!monitor) {
    return;
  }

  switch (event_id) {
    case SCREEN_LOCK_EVENT:
      monitor->NotifyScreenLocked();
      break;
    case SCREEN_UNLOCK_EVENT:
      monitor->NotifyScreenUnlocked();
      break;
  }
}

}  // namespace content
