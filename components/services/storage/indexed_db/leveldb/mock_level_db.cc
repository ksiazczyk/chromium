// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Mock LevelDB and MockIterator definitions
// summary: Defines constructors and destructors for the MockLevelDB and MockIterator test doubles.
// ---

#include "components/services/storage/indexed_db/leveldb/mock_level_db.h"

namespace leveldb {

MockIterator::MockIterator() = default;

MockIterator::~MockIterator() = default;

MockLevelDB::MockLevelDB() = default;

MockLevelDB::~MockLevelDB() = default;

}  // namespace leveldb
