// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Enclave keys waiter implementation
// summary: Implements a helper that observes the enclave manager and runs a RunLoop until out-of-context passkey recovery completes, returning the outcome.
// ---

#include "chrome/browser/webauthn/enclave_keys_waiter.h"

#include "base/functional/callback.h"
#include "base/run_loop.h"

EnclaveKeysWaiter::EnclaveKeysWaiter(EnclaveManager* enclave_manager)
    : enclave_manager_(enclave_manager) {
  enclave_manager->AddObserver(this);
}

EnclaveKeysWaiter::~EnclaveKeysWaiter() {
  enclave_manager_->RemoveObserver(this);
}

EnclaveManager::OutOfContextRecoveryOutcome EnclaveKeysWaiter::Wait() {
  run_loop_->Run();
  return outcome_;
}

void EnclaveKeysWaiter::OnOutOfContextRecoveryCompletion(
    EnclaveManager::OutOfContextRecoveryOutcome outcome) {
  run_loop_->Quit();
  outcome_ = outcome;
}
