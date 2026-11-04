// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Two-client common sync tests
// summary: Browser test verifying that awaiting quiescence works when one of two clients signs out and sync is turned off.
// ---

#include "build/build_config.h"
#include "chrome/browser/sync/test/integration/sync_service_impl_harness.h"
#include "chrome/browser/sync/test/integration/sync_test.h"
#include "content/public/test/browser_test.h"

namespace {

class TwoClientCommonSyncTest : public SyncTest {
 public:
  TwoClientCommonSyncTest() : SyncTest(TWO_CLIENT) {}
  ~TwoClientCommonSyncTest() override = default;
};

#if !BUILDFLAG(IS_CHROMEOS)
IN_PROC_BROWSER_TEST_F(TwoClientCommonSyncTest, AwaitQuiescenceWhenSyncOff) {
  ASSERT_TRUE(SetupSync());
  GetClient(1)->SignOutPrimaryAccount();
  EXPECT_TRUE(AwaitQuiescence());
}
#endif  // !BUILDFLAG(IS_CHROMEOS)

}  // namespace
