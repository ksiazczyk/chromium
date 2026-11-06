// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GPU client command-line switches
// summary: Defines command-line switch constants that enable GPU client logging and tracing of GL calls in the renderer.
// ---

#include "gpu/command_buffer/client/gpu_switches.h"

namespace switches {

// Enable GPU client logging.
const char kEnableGPUClientLogging[]        = "enable-gpu-client-logging";

// Enables TRACE for GL calls in the renderer.
const char kEnableGpuClientTracing[]        = "enable-gpu-client-tracing";

}  // namespace switches
