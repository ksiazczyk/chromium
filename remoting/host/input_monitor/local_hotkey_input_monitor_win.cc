// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows local hotkey input monitor stub
// summary: Windows factory for LocalHotkeyInputMonitor that currently returns null, leaving the hotkey monitor unimplemented on Windows.
// ---

#include "remoting/host/input_monitor/local_hotkey_input_monitor.h"

#include "base/functional/callback.h"
#include "base/task/single_thread_task_runner.h"

namespace remoting {

std::unique_ptr<LocalHotkeyInputMonitor> LocalHotkeyInputMonitor::Create(
    scoped_refptr<base::SingleThreadTaskRunner> caller_task_runner,
    scoped_refptr<base::SingleThreadTaskRunner> input_task_runner,
    scoped_refptr<base::SingleThreadTaskRunner> ui_task_runner,
    base::OnceClosure disconnect_callback) {
  return nullptr;
}

}  // namespace remoting
