// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: RasterCmdHelper implementation
// summary: Implements the Raster command buffer helper, a thin CommandBufferHelper subclass for the raster client.
// ---

#include "gpu/command_buffer/client/raster_cmd_helper.h"

namespace gpu {
namespace raster {

RasterCmdHelper::RasterCmdHelper(CommandBuffer* command_buffer)
    : CommandBufferHelper(command_buffer) {}

RasterCmdHelper::~RasterCmdHelper() = default;

}  // namespace raster
}  // namespace gpu
