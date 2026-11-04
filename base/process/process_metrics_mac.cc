// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mac process metrics implementation
// summary: Defines the Mac ProcessMetrics constructor and factory, supporting a port provider for metrics on other processes.
// ---

#include "base/process/process_metrics.h"

#include <memory>

#include "base/memory/ptr_util.h"

namespace base {

// static
std::unique_ptr<ProcessMetrics> ProcessMetrics::CreateProcessMetrics(
    ProcessHandle process,
    PortProvider* port_provider) {
  return WrapUnique(new ProcessMetrics(process, port_provider));
}

ProcessMetrics::ProcessMetrics(ProcessHandle process,
                               PortProvider* port_provider)
    : process_(process),
      last_absolute_idle_wakeups_(0),
      last_absolute_package_idle_wakeups_(0),
      port_provider_(port_provider) {}

}  // namespace base
