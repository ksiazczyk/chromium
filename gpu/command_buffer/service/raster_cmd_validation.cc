// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Contains various validation functions for the Raster service.

// ---docerion
// type: source
// title: Raster command validation implementation
// summary: Implements validation functions for raster service commands by including the generated validation tables.
// ---

#include "gpu/command_buffer/service/raster_cmd_validation.h"

#include <algorithm>

#include "gpu/command_buffer/service/gl_utils.h"

namespace gpu {
namespace raster {

#include "gpu/command_buffer/service/raster_cmd_validation_implementation_autogen.h"

}  // namespace raster
}  // namespace gpu
