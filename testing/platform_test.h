// Copyright 2006-2008 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: PlatformTest base class for unit tests
// summary: Defines a PlatformTest GTest base class that hooks platform-specific per-test setup, such as a Mac autorelease pool, falling back to plain testing::Test elsewhere.
// ---

#ifndef TESTING_PLATFORM_TEST_H_
#define TESTING_PLATFORM_TEST_H_

#include <gtest/gtest.h>

#if defined(GTEST_OS_MAC)
// The purpose of this class us to provide a hook for platform-specific
// operations across unit tests.  For example, on the Mac, it creates and
// releases an autorelease pool for each test case.  For now, it's only
// implemented on the Mac.  To enable this for another platform, just adjust
// the #ifdefs and add a platform_test_<platform>.cc implementation file.
class PlatformTest : public testing::Test {
 public:
  ~PlatformTest() override;

 protected:
  PlatformTest();

 private:
  void* autorelease_pool_;
};
#else

using PlatformTest = testing::Test;

#endif // GTEST_OS_MAC

#endif  // TESTING_PLATFORM_TEST_H_
