// Copyright 2009 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Contains various validation functions for the GLES2 service.

// ---docerion
// type: source
// title: GLES2 command validation functions
// summary: Implements validation functions for GLES2 service command arguments by including the generated validator implementation tables.
// ---

#include "gpu/command_buffer/service/gles2_cmd_validation.h"
#include "gpu/command_buffer/common/swap_buffers_flags.h"
#include "gpu/command_buffer/service/gl_utils.h"

namespace gpu {
namespace gles2 {

#include "gpu/command_buffer/service/gles2_cmd_validation_implementation_autogen.h"

}  // namespace gles2
}  // namespace gpu



