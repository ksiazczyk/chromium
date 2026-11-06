// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: DataTypeManager mock implementation
// summary: Implements the constructor and destructor of DataTypeManagerMock, a test mock of the sync DataTypeManager.
// ---

#include "components/sync/test/data_type_manager_mock.h"

#include "components/sync/service/configure_context.h"

namespace syncer {

DataTypeManagerMock::DataTypeManagerMock() : result_(OK, DataTypeSet()) {}

DataTypeManagerMock::~DataTypeManagerMock() = default;

}  // namespace syncer
