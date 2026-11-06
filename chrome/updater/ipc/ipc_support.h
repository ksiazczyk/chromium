// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Updater IPC support wrapper declaration
// summary: Declares ScopedIPCSupportWrapper, which owns the IPC thread and the Mojo scoped IPC support used by the updater.
// ---

#ifndef CHROME_UPDATER_IPC_IPC_SUPPORT_H_
#define CHROME_UPDATER_IPC_IPC_SUPPORT_H_

#include <memory>

#include "base/threading/thread.h"
#include "mojo/core/embedder/embedder.h"
#include "mojo/core/embedder/scoped_ipc_support.h"

namespace updater {

class ScopedIPCSupportWrapper {
 public:
  ScopedIPCSupportWrapper();
  ScopedIPCSupportWrapper(const ScopedIPCSupportWrapper&) = delete;
  ScopedIPCSupportWrapper& operator=(const ScopedIPCSupportWrapper) = delete;
  ~ScopedIPCSupportWrapper();

 private:
  base::Thread ipc_thread_ = base::Thread("ipc!");
  std::unique_ptr<mojo::core::ScopedIPCSupport> ipc_support_;
};

}  // namespace updater

#endif  // CHROME_UPDATER_IPC_IPC_SUPPORT_H_
