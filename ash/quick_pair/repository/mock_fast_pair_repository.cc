// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Fast Pair repository implementation
// summary: Implements MockFastPairRepository's constructor and destructor, registering and unregistering the mock as the testing instance.
// relations:
//   - implements /ash/quick_pair/repository/mock_fast_pair_repository.h
// ---

#include "ash/quick_pair/repository/mock_fast_pair_repository.h"

namespace ash {
namespace quick_pair {

MockFastPairRepository::MockFastPairRepository() {
  SetInstanceForTesting(this);
}

MockFastPairRepository::~MockFastPairRepository() {
  SetInstanceForTesting(nullptr);
}

}  // namespace quick_pair
}  // namespace ash
