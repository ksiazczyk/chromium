// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestTaskGraphRunner declaration
// summary: Declares TestTaskGraphRunner, a non-copyable single-thread task graph runner for use in cc tests.
// ---

#ifndef CC_TEST_TEST_TASK_GRAPH_RUNNER_H_
#define CC_TEST_TEST_TASK_GRAPH_RUNNER_H_

#include "base/threading/simple_thread.h"
#include "cc/raster/single_thread_task_graph_runner.h"

namespace cc {

class TestTaskGraphRunner : public SingleThreadTaskGraphRunner {
 public:
  TestTaskGraphRunner();
  TestTaskGraphRunner(const TestTaskGraphRunner&) = delete;
  ~TestTaskGraphRunner() override;

  TestTaskGraphRunner& operator=(const TestTaskGraphRunner&) = delete;
};

}  // namespace cc

#endif  // CC_TEST_TEST_TASK_GRAPH_RUNNER_H_
