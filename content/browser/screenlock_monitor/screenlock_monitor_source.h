// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ScreenlockMonitorSource header (source.h)
// summary: Declares the ScreenlockMonitorSource base class with the ScreenlockEvent enum and the static ProcessScreenlockEvent entry point for platform-specific subclasses.
// ---

#ifndef CONTENT_BROWSER_SCREENLOCK_MONITOR_SCREENLOCK_MONITOR_SOURCE_H_
#define CONTENT_BROWSER_SCREENLOCK_MONITOR_SCREENLOCK_MONITOR_SOURCE_H_

#include "content/common/content_export.h"

namespace content {

// A class to communicate screenlock state changes from each platform-specific
// sub-class source implementation to the screenlock monitor.
class CONTENT_EXPORT ScreenlockMonitorSource {
 public:
  ScreenlockMonitorSource();

  ScreenlockMonitorSource(const ScreenlockMonitorSource&) = delete;
  ScreenlockMonitorSource& operator=(const ScreenlockMonitorSource&) = delete;

  virtual ~ScreenlockMonitorSource();

  enum ScreenlockEvent { SCREEN_LOCK_EVENT, SCREEN_UNLOCK_EVENT };

  // ProcessScreenlockEvent should only be called from a single thread.
  static void ProcessScreenlockEvent(ScreenlockEvent event_id);
};

}  // namespace content

#endif  // CONTENT_BROWSER_SCREENLOCK_MONITOR_SCREENLOCK_MONITOR_SOURCE_H_
