// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Pairing registry delegate factory for macOS
// summary: Creates the macOS pairing registry delegate, returning null because no delegate is implemented for this platform.
// ---

#include "remoting/host/pairing_registry_delegate.h"

#include "base/task/task_runner.h"

namespace remoting {

using protocol::PairingRegistry;

std::unique_ptr<PairingRegistry::Delegate> CreatePairingRegistryDelegate() {
  return nullptr;
}

}  // namespace remoting
