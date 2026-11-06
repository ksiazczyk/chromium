// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Bulk leak check service mock implementation
// summary: Implements the constructor and destructor of the mocked bulk leak check service used by unit tests.
// ---

#include "components/password_manager/core/browser/leak_detection/mock_bulk_leak_check_service.h"

#include "base/timer/elapsed_timer.h"

namespace password_manager {

MockBulkLeakCheckService::MockBulkLeakCheckService() = default;
MockBulkLeakCheckService::~MockBulkLeakCheckService() = default;

}  // namespace password_manager
