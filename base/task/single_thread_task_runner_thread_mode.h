// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SingleThreadTaskRunnerThreadMode enum
// summary: Defines an enum choosing whether a SingleThreadTaskRunner shares its thread with others or gets a dedicated thread torn down with the runner.
// ---

#ifndef BASE_TASK_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_
#define BASE_TASK_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_

namespace base {

enum class SingleThreadTaskRunnerThreadMode {
  // Allow the SingleThreadTaskRunner's thread to be shared with others,
  // allowing for efficient use of thread resources when this
  // SingleThreadTaskRunner is idle. This is the default mode and is
  // recommended for thread-affine code.
  SHARED,
  // Create a new thread, dedicated to this SingleThreadTaskRunner, and tear it
  // down when the last reference to the TaskRunner is dropped.
  DEDICATED,
};

}  // namespace base

#endif  // BASE_TASK_SINGLE_THREAD_TASK_RUNNER_THREAD_MODE_H_
