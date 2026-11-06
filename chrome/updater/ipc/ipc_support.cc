// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Updater IPC support implementation
// summary: Initializes Mojo IPC support for the updater by configuring the Mojo embedder and running a dedicated IO thread for IPC.
// ---

#include "chrome/updater/ipc/ipc_support.h"

#include <memory>

#include "base/message_loop/message_pump_type.h"
#include "base/threading/thread.h"
#include "mojo/core/embedder/configuration.h"
#include "mojo/core/embedder/embedder.h"
#include "mojo/core/embedder/scoped_ipc_support.h"

namespace updater {

ScopedIPCSupportWrapper::ScopedIPCSupportWrapper() {
  mojo::core::Configuration config;
  config.is_broker_process = true;
  mojo::core::Init(config);
  ipc_thread_.StartWithOptions(
      base::Thread::Options(base::MessagePumpType::IO, 0));

  ipc_support_ = std::make_unique<mojo::core::ScopedIPCSupport>(
      ipc_thread_.task_runner(),
      mojo::core::ScopedIPCSupport::ShutdownPolicy::CLEAN);
}

ScopedIPCSupportWrapper::~ScopedIPCSupportWrapper() = default;

}  // namespace updater
