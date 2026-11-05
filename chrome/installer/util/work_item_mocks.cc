// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Work item mock implementations
// summary: Provides constructor and destructor definitions for mock work item and condition classes used by installer unit tests.
// ---

#include "chrome/installer/util/work_item_mocks.h"

MockWorkItem::MockWorkItem() = default;
MockWorkItem::~MockWorkItem() = default;

MockCondition::MockCondition() = default;
MockCondition::~MockCondition() = default;
