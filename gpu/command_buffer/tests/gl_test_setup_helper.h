// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: GL test setup helper header
// summary: Declares GLTestSetupHelper, a test event listener that automatically sets up and tears down the GL environment before and after each test for use in test suites.
// ---

#ifndef GPU_COMMAND_BUFFER_TESTS_GL_TEST_SETUP_HELPER_H_
#define GPU_COMMAND_BUFFER_TESTS_GL_TEST_SETUP_HELPER_H_

#include "base/memory/raw_ptr.h"
#include "base/test/task_environment.h"
#include "testing/gtest/include/gtest/gtest.h"
#include "ui/gl/gl_display.h"

namespace gpu {

// Helper class to automatically set-up and initialize GL environment before
// every test, and tear down the environment after every test. This should
// normally be used from base::TestSuite instances, so that it takes care of the
// set-up/tear-down between every test, and each test does not have to do this
// explicitly.
class GLTestSetupHelper : public testing::EmptyTestEventListener {
 public:
  GLTestSetupHelper();
  ~GLTestSetupHelper();

  // testing::EmptyTestEventListener:
  void OnTestStart(const testing::TestInfo& test_info) override;
  void OnTestEnd(const testing::TestInfo& test_info) override;

 private:
  std::unique_ptr<base::test::TaskEnvironment> task_environment_;
  raw_ptr<gl::GLDisplay> display_ = nullptr;
};

}  // namespace gpu
#endif  // GPU_COMMAND_BUFFER_TESTS_GL_TEST_SETUP_HELPER_H_
