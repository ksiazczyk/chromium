// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Sync engine implementation
// summary: Implements SyncEngine constructors, destructors and the default move semantics of its InitParams struct.
// ---

#include "components/sync/engine/sync_engine.h"

#include "components/os_crypt/async/common/encryptor.h"
#include "components/sync/engine/engine_components_factory.h"

namespace syncer {

SyncEngine::InitParams::InitParams() = default;
SyncEngine::InitParams::InitParams(InitParams&& other) = default;
SyncEngine::InitParams::~InitParams() = default;

SyncEngine::SyncEngine() = default;
SyncEngine::~SyncEngine() = default;

}  // namespace syncer
