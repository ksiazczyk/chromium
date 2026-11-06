// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// ---docerion
// type: test
// title: Mock GL expectations for ContextState initialization
// summary: Test helper that sets up mock GL capability and state expectations used when initializing ContextState in unit tests.
// ---

#ifndef GPU_COMMAND_BUFFER_SERVICE_CONTEXT_STATE_TEST_HELPERS_H_
#define GPU_COMMAND_BUFFER_SERVICE_CONTEXT_STATE_TEST_HELPERS_H_

#include "testing/gtest/include/gtest/gtest.h"
#include "ui/gl/gl_mock.h"

namespace gfx {
class Size;
}  // namespace gfx

namespace gpu {
namespace gles2 {
class FeatureInfo;
}  // namespace gles2

class ContextStateTestHelpers {
 public:
  using MockGL = ::testing::StrictMock<::gl::MockGLInterface>;
  static void SetupInitState(MockGL* gl,
                             gles2::FeatureInfo* feature_info,
                             const gfx::Size& initial_size);

 private:
  static void SetupInitCapabilitiesExpectations(
      MockGL* gl,
      gles2::FeatureInfo* feature_info);
  static void SetupInitStateExpectations(MockGL* gl,
                                         gles2::FeatureInfo* feature_info,
                                         const gfx::Size& initial_size);
  static void SetupInitStateManualExpectations(
      MockGL* gl,
      gles2::FeatureInfo* feature_info);
  static void SetupInitStateManualExpectationsForDoLineWidth(MockGL* gl,
                                                             GLfloat width);
  static void ExpectEnableDisable(MockGL* gl, GLenum cap, bool enable);
};

}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_SERVICE_CONTEXT_STATE_TEST_HELPERS_H_
