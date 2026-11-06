// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Unit tests for net_util
// summary: Verifies that HRESULTFromLastError maps Windows error codes to the expected HRESULT values.
// ---

#include "components/winhttp/net_util.h"

#include "testing/gtest/include/gtest/gtest.h"

namespace winhttp {

TEST(WinHttpUtil, HRESULTFromLastError) {
  ::SetLastError(ERROR_ACCESS_DENIED);
  EXPECT_EQ(E_ACCESSDENIED, HRESULTFromLastError());
  ::SetLastError(ERROR_SUCCESS);
  EXPECT_EQ(E_FAIL, HRESULTFromLastError());
}

}  // namespace winhttp
