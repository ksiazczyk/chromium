// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock web contents task manager implementation
// summary: Implements a mock task manager that records tasks added and removed by the web contents task provider for use in tests.
// ---

#include "chrome/browser/task_manager/mock_web_contents_task_manager.h"

#include <algorithm>

#include "build/build_config.h"

namespace task_manager {

MockWebContentsTaskManager::MockWebContentsTaskManager() = default;

MockWebContentsTaskManager::~MockWebContentsTaskManager() = default;

void MockWebContentsTaskManager::TaskAdded(Task* task) {
  CHECK(task, base::NotFatalUntil::M162);
  CHECK(!std::ranges::contains(tasks_, task), base::NotFatalUntil::M162);
  tasks_.push_back(task);
}

void MockWebContentsTaskManager::TaskRemoved(Task* task) {
  CHECK(task, base::NotFatalUntil::M162);
  const auto it = std::ranges::find(tasks_, task);
  CHECK(it != tasks_.end());
  tasks_.erase(it);
}

void MockWebContentsTaskManager::StartObserving() {
  provider_.SetObserver(this);
}

void MockWebContentsTaskManager::StopObserving() {
  provider_.ClearObserver();
}

}  // namespace task_manager
