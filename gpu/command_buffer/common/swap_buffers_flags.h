// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SwapBuffers flags for the GLES2 command buffer
// summary: Defines the SwapBuffersFlags class with flags for calling glSwapBuffers in the Chromium GLES2 command buffer, such as requesting VSync parameter updates.
// ---

#ifndef GPU_COMMAND_BUFFER_COMMON_SWAP_BUFFERS_FLAGS_H_
#define GPU_COMMAND_BUFFER_COMMON_SWAP_BUFFERS_FLAGS_H_

namespace gpu {

// Flags for calling glSwapBuffers with Chromium GLES2 command buffer.
class SwapBuffersFlags {
 public:
  enum : uint32_t {
    kVSyncParams = 1 << 0,  // Request VSYNC parameters update.
  };
};

}  // namespace gpu

#endif  // GPU_COMMAND_BUFFER_COMMON_SWAP_BUFFERS_FLAGS_H_
