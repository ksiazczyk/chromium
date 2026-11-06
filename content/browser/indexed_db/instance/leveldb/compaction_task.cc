// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: IndexedDB compaction task implementation
// summary: Implements a pre-close task that compacts the full LevelDB database range before the backing store closes.
// ---

#include "content/browser/indexed_db/instance/leveldb/compaction_task.h"

#include "base/trace_event/trace_event.h"
#include "third_party/leveldatabase/src/include/leveldb/db.h"

namespace content::indexed_db::level_db {

IndexedDBCompactionTask::IndexedDBCompactionTask(leveldb::DB* database)
    : BackingStorePreCloseTaskQueue::PreCloseTask(database) {}

IndexedDBCompactionTask::~IndexedDBCompactionTask() = default;

bool IndexedDBCompactionTask::RequiresMetadata() const {
  return false;
}

bool IndexedDBCompactionTask::RunRound() {
  TRACE_EVENT0("IndexedDB", "CompactRange");
  database()->CompactRange(nullptr, nullptr);
  return true;
}

}  // namespace content::indexed_db::level_db
