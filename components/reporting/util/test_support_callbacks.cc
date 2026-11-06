// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Test callback waiter implementations
// summary: Implements TestCallbackWaiter and TestCallbackAutoWaiter helpers used to wait for callbacks in reporting tests.
// ---

#include "components/reporting/util/test_support_callbacks.h"

namespace reporting {
namespace test {

TestCallbackWaiter::TestCallbackWaiter() : signaled_cb_(cb()) {}
TestCallbackWaiter::~TestCallbackWaiter() = default;

TestCallbackAutoWaiter::TestCallbackAutoWaiter() {
  Attach();
}
TestCallbackAutoWaiter::~TestCallbackAutoWaiter() {
  Wait();
}

}  // namespace test
}  // namespace reporting
