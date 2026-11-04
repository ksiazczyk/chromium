// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for the test tile task runner
// summary: Declares the TestTileTaskRunner class with static methods to schedule, run, cancel, and complete a single tile task in tests.
// ---

#ifndef CC_TEST_TEST_TILE_TASK_RUNNER_H_
#define CC_TEST_TEST_TILE_TASK_RUNNER_H_

#include "cc/raster/tile_task.h"

namespace cc {

// This task runner operates on single task. User has to call respective
// functions to operate on task.
class TestTileTaskRunner {
 public:
  // Schedules, runs and completes the task.
  static void ProcessTask(TileTask* task);

  static void ScheduleTask(TileTask* task);
  static void CancelTask(TileTask* task);

  // Before running the task it must be scheduled. Call ScheduleTask() before
  // calling this function. This starts, runs and finishes the task.
  static void RunTask(TileTask* task);

  // Before completing the task it must be canceled or finished by running. Call
  // RunTask() or CancelTask before calling this function.
  static void CompleteTask(TileTask* task);
};

}  // namespace cc

#endif  // CC_TEST_TEST_TILE_TASK_RUNNER_H_
