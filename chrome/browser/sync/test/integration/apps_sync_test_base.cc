// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Apps sync test base implementation
// summary: Implements the AppsSyncTestBase constructor and destructor used by apps sync integration tests.
// ---

#include "chrome/browser/sync/test/integration/apps_sync_test_base.h"

AppsSyncTestBase::AppsSyncTestBase(TestType test_type) : SyncTest(test_type) {}

AppsSyncTestBase::~AppsSyncTestBase() = default;
