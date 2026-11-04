// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: TaskTimeObserver implementation
// summary: Implements the TaskTimeObserver destructor, checking that the observer is not in an observer list when destroyed.
// ---

#include "base/task/sequence_manager/task_time_observer.h"

namespace base::sequence_manager {

TaskTimeObserver::~TaskTimeObserver() {
  CHECK(!IsInObserverList());
}

}  // namespace base::sequence_manager
