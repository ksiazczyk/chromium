// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: In-memory test strike database implementation
// summary: Implements an in-memory strike database that records and clears strikes without persistent storage.
// ---

#include "components/autofill/core/browser/strike_databases/payments/test_strike_database.h"

#include "components/strike_database/strike_data.pb.h"

namespace autofill {

TestStrikeDatabase::TestStrikeDatabase() = default;

TestStrikeDatabase::~TestStrikeDatabase() = default;

void TestStrikeDatabase::GetProtoStrikes(
    const std::string& key,
    const StrikesCallback& outer_callback) {
  auto it = db_.find(key);
  outer_callback.Run(it != db_.end() ? it->second.num_strikes() : 0);
}

void TestStrikeDatabase::ClearAllProtoStrikes(
    const ClearStrikesCallback& outer_callback) {
  db_.clear();
  outer_callback.Run(/*success=*/true);
}

void TestStrikeDatabase::ClearAllProtoStrikesForKey(
    const std::string& key,
    const ClearStrikesCallback& outer_callback) {
  db_.erase(key);
  outer_callback.Run(/*success=*/true);
}

}  // namespace autofill
