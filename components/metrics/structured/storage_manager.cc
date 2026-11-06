// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Storage manager implementation
// summary: Implements StorageManager, notifying its delegate when event buffers are flushed to disk.
// ---

#include "components/metrics/structured/storage_manager.h"

namespace metrics::structured {

StorageManager::StorageManager() = default;

StorageManager::~StorageManager() = default;

void StorageManager::NotifyOnFlushed(const FlushedKey& key) {
  if (delegate_) {
    delegate_->OnFlushed(key);
  }
}

}  // namespace metrics::structured
