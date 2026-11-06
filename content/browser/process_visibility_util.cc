// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Browser visibility to process priority utility
// summary: Updates the process priority tracker when browser visibility changes, switching between user-blocking and best-effort priority.
// ---

#include "content/public/browser/process_visibility_util.h"

#include "content/common/process_priority_tracker.h"

namespace content {

void OnBrowserVisibilityChanged(bool visible) {
  ProcessPriorityTracker::GetInstance()->OnProcessPriorityChanged(
      visible ? base::Process::Priority::kUserBlocking
              : base::Process::Priority::kBestEffort);
}

}  // namespace content
