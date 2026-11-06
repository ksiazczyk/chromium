// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Swap buffers complete params implementation
// summary: Defines constructors, move assignment, and destructor for the SwapBuffersCompleteParams structure.
// ---

#include "gpu/command_buffer/common/swap_buffers_complete_params.h"

namespace gpu {

SwapBuffersCompleteParams::SwapBuffersCompleteParams() = default;

SwapBuffersCompleteParams::SwapBuffersCompleteParams(
    SwapBuffersCompleteParams&& other) = default;

SwapBuffersCompleteParams& SwapBuffersCompleteParams::operator=(
    SwapBuffersCompleteParams&& other) = default;

SwapBuffersCompleteParams::~SwapBuffersCompleteParams() = default;

}  // namespace gpu
