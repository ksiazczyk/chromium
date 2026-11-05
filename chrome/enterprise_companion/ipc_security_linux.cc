// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Linux IPC security
// summary: Allows IPC connections only from callers whose effective user ID matches the companion process.
// ---

#include "chrome/enterprise_companion/ipc_security.h"

#include <sys/types.h>
#include <unistd.h>

#include "base/functional/bind.h"
#include "components/named_mojo_ipc_server/connection_info.h"

namespace enterprise_companion {

IpcTrustDecider CreateIpcTrustDecider() {
  return base::BindRepeating(
      [](const named_mojo_ipc_server::ConnectionInfo& connector) {
        return connector.credentials.uid == geteuid();
      });
}

}  // namespace enterprise_companion
