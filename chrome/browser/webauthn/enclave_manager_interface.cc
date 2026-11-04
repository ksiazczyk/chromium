// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: EnclaveManagerInterface default implementation
// summary: Provides the default EnclaveManagerInterface::GetEnclaveManager definition that is not reachable, since only real EnclaveManager instances should call it.
// ---

#include "chrome/browser/webauthn/enclave_manager_interface.h"

#include "base/notreached.h"

EnclaveManager* EnclaveManagerInterface::GetEnclaveManager() {
  NOTREACHED();
}
