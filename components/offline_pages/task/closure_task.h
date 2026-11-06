// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ClosureTask class declaration
// summary: Declares ClosureTask, a Task subclass that executes a provided base::OnceClosure on Run() and then calls TaskComplete().
// ---

#ifndef COMPONENTS_OFFLINE_PAGES_TASK_CLOSURE_TASK_H_
#define COMPONENTS_OFFLINE_PAGES_TASK_CLOSURE_TASK_H_

#include "base/functional/callback.h"
#include "components/offline_pages/task/task.h"

namespace offline_pages {

// Implements |Task| by calling a closure on |Run()|, and then calling
// TaskComplete().
class ClosureTask : public Task {
 public:
  ClosureTask(base::OnceClosure closure);
  ~ClosureTask() override;

 private:
  void Run() override;

  base::OnceClosure closure_;
};

}  // namespace offline_pages

#endif  // COMPONENTS_OFFLINE_PAGES_TASK_CLOSURE_TASK_H_
