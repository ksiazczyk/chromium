// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Time sync tracker base implementation
// summary: Implements observer list management and notification for the base TimeSyncTracker class.
// ---

#include "chromecast/net/time_sync_tracker.h"

namespace chromecast {

TimeSyncTracker::TimeSyncTracker() {}

TimeSyncTracker::~TimeSyncTracker() = default;

void TimeSyncTracker::AddObserver(Observer* observer) {
  observer_list_.AddObserver(observer);
}

void TimeSyncTracker::RemoveObserver(Observer* observer) {
  observer_list_.RemoveObserver(observer);
}

void TimeSyncTracker::Notify() {
  for (Observer& observer : observer_list_) {
    observer.OnTimeSynced();
  }
}

}  // namespace chromecast
