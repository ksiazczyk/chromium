// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock commit queue implementation
// summary: Implements the constructor and destructor of the gmock-based MockCommitQueue used to fake the commit queue in sync tests.
// ---

#include "components/sync/test/mock_commit_queue.h"

namespace syncer {

MockCommitQueue::MockCommitQueue() = default;

MockCommitQueue::~MockCommitQueue() = default;

}  //  namespace syncer
