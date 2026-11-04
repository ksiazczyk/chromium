// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: ThreadPool service thread implementation
// summary: Implements the thread pool's ServiceThread, a mostly idle thread that forwards async events such as delayed tasks and async I/O to their destinations.
// ---

#include "base/task/thread_pool/service_thread.h"

#include "base/debug/alias.h"

namespace base::internal {

ServiceThread::ServiceThread() : Thread("ThreadPoolServiceThread") {}

NOINLINE void ServiceThread::Run(RunLoop* run_loop) {
  Thread::Run(run_loop);
  NO_CODE_FOLDING();
}

}  // namespace base::internal
