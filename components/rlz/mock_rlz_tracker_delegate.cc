// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock RLZ tracker delegate implementation
// summary: Implements the constructor and destructor of the mock RLZ tracker delegate used by unit tests.
// ---

#include "components/rlz/mock_rlz_tracker_delegate.h"

namespace rlz {

MockRLZTrackerDelegate::MockRLZTrackerDelegate() = default;

MockRLZTrackerDelegate::~MockRLZTrackerDelegate() = default;

}  // namespace rlz
