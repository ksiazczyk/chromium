// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise Companion IPC support implementation
// summary: Initializes Mojo IPC support on a dedicated IO thread so the enterprise companion app can use Mojo messaging.
// ---

#include "chrome/enterprise_companion/ipc_support.h"

#include <memory>

#include "base/message_loop/message_pump_type.h"
#include "base/threading/thread.h"
#include "mojo/core/embedder/configuration.h"
#include "mojo/core/embedder/embedder.h"
#include "mojo/core/embedder/scoped_ipc_support.h"

namespace enterprise_companion {

ScopedIPCSupportWrapper::ScopedIPCSupportWrapper() {
  mojo::core::Init({.is_broker_process = true});
  ipc_thread_.StartWithOptions(
      base::Thread::Options(base::MessagePumpType::IO, 0));

  ipc_support_ = std::make_unique<mojo::core::ScopedIPCSupport>(
      ipc_thread_.task_runner(),
      mojo::core::ScopedIPCSupport::ShutdownPolicy::CLEAN);
}

ScopedIPCSupportWrapper::~ScopedIPCSupportWrapper() = default;

}  // namespace enterprise_companion
