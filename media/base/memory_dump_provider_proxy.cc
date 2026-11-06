// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MemoryDumpProviderProxy implementation
// summary: Implements a proxy that registers a media memory dump provider with the trace event memory dump manager on a sequenced task runner and forwards dump callbacks to a provided callback.
// ---

#include "media/base/memory_dump_provider_proxy.h"

#include <utility>

#include "base/task/sequenced_task_runner.h"
#include "base/trace_event/memory_dump_manager.h"

namespace media {

MemoryDumpProviderProxy::MemoryDumpProviderProxy(
    MemoryDumpProvider::Name name,
    scoped_refptr<base::SequencedTaskRunner> task_runner,
    MemoryDumpCB dump_cb)
    : dump_cb_(std::move(dump_cb)) {
  base::trace_event::MemoryDumpManager::GetInstance()
      ->RegisterDumpProviderWithSequencedTaskRunner(
          this, std::move(name), std::move(task_runner),
          MemoryDumpProvider::Options());
}

MemoryDumpProviderProxy::~MemoryDumpProviderProxy() {
  base::trace_event::MemoryDumpManager::GetInstance()->UnregisterDumpProvider(
      this);
}

bool MemoryDumpProviderProxy::OnMemoryDump(
    const base::trace_event::MemoryDumpArgs& args,
    base::trace_event::ProcessMemoryDump* pmd) {
  dump_cb_.Run(args, pmd);
  return true;
}

}  // namespace media
