// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SimpleSyncTokenClient implementation
// summary: Implements SimpleSyncTokenClient, which returns a fixed GPU sync token on generation and performs no waiting.
// ---

#include "media/base/simple_sync_token_client.h"

namespace media {

SimpleSyncTokenClient::SimpleSyncTokenClient(const gpu::SyncToken& sync_token)
    : sync_token_(sync_token) {}

void SimpleSyncTokenClient::GenerateSyncToken(gpu::SyncToken* sync_token) {
  *sync_token = sync_token_;
}

void SimpleSyncTokenClient::WaitSyncToken(const gpu::SyncToken& sync_token) {}

}  // namespace media
