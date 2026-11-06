// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Signed dispatcher implementation
// summary: Implements the SignedDispatcher class, which sets up IPC interception of NtCreateSection for signed-binary policy handling in the Windows sandbox.
// ---

#include "sandbox/win/src/signed_dispatcher.h"

#include "sandbox/win/src/interception.h"
#include "sandbox/win/src/interceptors.h"
#include "sandbox/win/src/ipc_tags.h"
#include "sandbox/win/src/sandbox.h"
#include "sandbox/win/src/signed_interception.h"
#include "sandbox/win/src/signed_policy.h"

namespace sandbox {

SignedDispatcher::SignedDispatcher(PolicyBase* policy_base)
    : policy_base_(policy_base) {
}

bool SignedDispatcher::SetupService(InterceptionManager* manager,
                                    IpcTag service) {
  return service == IpcTag::NTCREATESECTION
             ? INTERCEPT_NT(manager, NtCreateSection, CREATE_SECTION_ID, 32)
             : false;
}

}  // namespace sandbox
