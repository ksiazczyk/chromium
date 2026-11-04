// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Mock Quick Pair browser delegate implementation
// summary: Implements the MockQuickPairBrowserDelegate constructor and destructor that register and unregister the mock as the active delegate instance.
// relations:
//   - implements /ash/quick_pair/common/mock_quick_pair_browser_delegate.h
// ---

#include "ash/quick_pair/common/mock_quick_pair_browser_delegate.h"

namespace ash::quick_pair {

MockQuickPairBrowserDelegate::MockQuickPairBrowserDelegate() {
  SetInstance(this);
}

MockQuickPairBrowserDelegate::~MockQuickPairBrowserDelegate() {
  SetInstance(nullptr);
}

}  // namespace ash::quick_pair
