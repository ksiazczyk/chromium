// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test model executor implementation
// summary: Implements a fake model executor for tests that echoes float inputs back as results for single, batch, and synchronous batch execution requests.
// ---

#include "components/optimization_guide/core/inference/test_model_executor.h"

namespace optimization_guide {

void TestModelExecutor::SendForExecution(ExecutionCallback callback_on_complete,
                                         base::TimeTicks start_time,
                                         const std::vector<float>& args) {
  std::vector<float> results;
  results.reserve(args.size());
  for (float arg : args) {
    results.push_back(arg);
  }
  std::move(callback_on_complete).Run(std::move(results));
}

void TestModelExecutor::SendForBatchExecution(
    BatchExecutionCallback callback_on_complete,
    base::TimeTicks start_time,
    const std::vector<std::vector<float>>& args) {
  std::vector<std::optional<std::vector<float>>> results;
  results.reserve(args.size());
  for (const std::vector<float>& arg : args) {
    results.push_back(arg);
  }
  std::move(callback_on_complete).Run(std::move(results));
}

std::vector<std::optional<std::vector<float>>>
TestModelExecutor::SendForBatchExecutionSync(
    const std::vector<std::vector<float>>& args) {
  std::vector<std::optional<std::vector<float>>> results;
  results.reserve(args.size());
  for (const std::vector<float>& arg : args) {
    results.push_back(arg);
  }
  return results;
}

}  // namespace optimization_guide
