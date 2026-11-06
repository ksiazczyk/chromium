// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Implementation of allocation recorder crash handler mocks
// summary: Provides constructor and destructor definitions for the StreamDataSourceFactoryMock and AllocationRecorderHolderMock test doubles.
// ---

#include "components/allocation_recorder/testing/mock_objects.h"

namespace allocation_recorder::testing::crash_handler {

StreamDataSourceFactoryMock::StreamDataSourceFactoryMock() = default;
StreamDataSourceFactoryMock::~StreamDataSourceFactoryMock() = default;

AllocationRecorderHolderMock::AllocationRecorderHolderMock() = default;
AllocationRecorderHolderMock::~AllocationRecorderHolderMock() = default;

}  // namespace allocation_recorder::testing::crash_handler
