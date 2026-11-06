// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Process shutdown helper implementation
// summary: Implements IsProcessShuttingDown by delegating to the KeepAliveRegistry shutdown state in the ash namespace.
// ---

#include "chromeos/ash/components/login/session/process_shutdown.h"

#include "components/keep_alive_registry/keep_alive_registry.h"

namespace ash {

bool IsProcessShuttingDown() {
  return KeepAliveRegistry::GetInstance()->IsShuttingDown();
}

}  // namespace ash
