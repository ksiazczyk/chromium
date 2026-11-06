// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Default ActiveDisplayMonitor factory
// summary: Stub Create() implementation that reports the active display monitor as unavailable on unsupported platforms.
// ---

#include "remoting/host/active_display_monitor.h"

#include "base/functional/callback.h"
#include "base/notimplemented.h"
#include "base/task/single_thread_task_runner.h"

namespace remoting {

// static
std::unique_ptr<ActiveDisplayMonitor> ActiveDisplayMonitor::Create(
    scoped_refptr<base::SingleThreadTaskRunner> ui_task_runner,
    ActiveDisplayMonitor::Callback active_display_callback) {
  NOTIMPLEMENTED();
  return nullptr;
}

}  // namespace remoting
