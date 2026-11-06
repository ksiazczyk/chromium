// Copyright 2026 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Header for GL test service helper
// summary: Header declaring InspectTextureLevelSize, a test helper that reads texture level dimensions from the command buffer service's texture manager.
// ---

#ifndef GPU_COMMAND_BUFFER_TESTS_GL_TEST_SERVICE_HELPER_H_
#define GPU_COMMAND_BUFFER_TESTS_GL_TEST_SERVICE_HELPER_H_

namespace gpu {
class GLManager;

bool InspectTextureLevelSize(GLManager* gl_manager,
                             unsigned int client_id,
                             unsigned int target,
                             int level,
                             int* width,
                             int* height);

}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_TESTS_GL_TEST_SERVICE_HELPER_H_
