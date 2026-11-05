// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IPC security interface
// summary: Declares the IPC trust decider callback type and factory used to decide whether an IPC caller is allowed.
// ---

#ifndef CHROME_ENTERPRISE_COMPANION_IPC_SECURITY_H_
#define CHROME_ENTERPRISE_COMPANION_IPC_SECURITY_H_

#include "base/functional/callback.h"
#include "components/named_mojo_ipc_server/connection_info.h"

namespace enterprise_companion {

// Returns true if IPC caller is allowed.
using IpcTrustDecider =
    base::RepeatingCallback<bool(const named_mojo_ipc_server::ConnectionInfo&)>;

IpcTrustDecider CreateIpcTrustDecider();

}  // namespace enterprise_companion

#endif  // CHROME_ENTERPRISE_COMPANION_IPC_SECURITY_H_
