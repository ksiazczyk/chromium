// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Defines all the command-line switches used by gpu/command_buffer/client/.

// ---docerion
// type: source
// title: GPU client command-line switch declarations
// summary: Declares the exported command-line switch constants used by gpu/command_buffer/client for GPU client logging and tracing.
// ---

#ifndef GPU_COMMAND_BUFFER_CLIENT_GPU_SWITCHES_H_
#define GPU_COMMAND_BUFFER_CLIENT_GPU_SWITCHES_H_

#include "gpu/command_buffer/client/gles2_impl_export.h"

namespace switches {

GLES2_IMPL_EXPORT extern const char kEnableGpuClientTracing[];
GLES2_IMPL_EXPORT extern const char kEnableGPUClientLogging[];

}  // namespace switches

#endif  // GPU_COMMAND_BUFFER_CLIENT_GPU_SWITCHES_H_

