// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock remote change processor implementation
// summary: Provides the constructor and destructor for the MockRemoteChangeProcessor test double.
// ---

#include "chrome/browser/sync_file_system/mock_remote_change_processor.h"

namespace sync_file_system {

MockRemoteChangeProcessor::MockRemoteChangeProcessor() = default;

MockRemoteChangeProcessor::~MockRemoteChangeProcessor() = default;

}  // sync_file_system
