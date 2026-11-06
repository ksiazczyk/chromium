// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: gtest-death-test.h forwarding header
// summary: Forwarding header that re-exports Google Test's death test API from third_party/googletest so Chromium code can include it via the stable testing/gtest path.
// ---

#ifndef TESTING_GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
#define TESTING_GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_

// The file/directory layout of Google Test is not yet considered stable. Until
// it stabilizes, Chromium code will use forwarding headers in testing/gtest
// and testing/gmock, instead of directly including files in
// third_party/googletest.

#include "third_party/googletest/src/googletest/include/gtest/gtest-death-test.h"  // IWYU pragma: export

#endif  // TESTING_GTEST_INCLUDE_GTEST_GTEST_DEATH_TEST_H_
