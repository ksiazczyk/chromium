// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Enterprise Companion IPC support wrapper header
// summary: Declares ScopedIPCSupportWrapper, which sets up Mojo IPC support on a dedicated thread for the app.
// ---

#ifndef CHROME_ENTERPRISE_COMPANION_IPC_SUPPORT_H_
#define CHROME_ENTERPRISE_COMPANION_IPC_SUPPORT_H_

#include <memory>

#include "base/threading/thread.h"
#include "mojo/core/embedder/embedder.h"
#include "mojo/core/embedder/scoped_ipc_support.h"

namespace enterprise_companion {

class ScopedIPCSupportWrapper {
 public:
  ScopedIPCSupportWrapper();
  ScopedIPCSupportWrapper(const ScopedIPCSupportWrapper&) = delete;
  ScopedIPCSupportWrapper& operator=(const ScopedIPCSupportWrapper) = delete;
  ~ScopedIPCSupportWrapper();

 private:
  base::Thread ipc_thread_ = base::Thread("IpcThread");
  std::unique_ptr<mojo::core::ScopedIPCSupport> ipc_support_;
};

}  // namespace enterprise_companion

#endif  // CHROME_ENTERPRISE_COMPANION_IPC_SUPPORT_H_
