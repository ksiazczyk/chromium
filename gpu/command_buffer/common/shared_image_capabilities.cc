// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: SharedImageCapabilities implementation
// summary: Provides the default constructor, copy constructor, and destructor definitions for the SharedImageCapabilities struct.
// ---

#include "gpu/command_buffer/common/shared_image_capabilities.h"

namespace gpu {

SharedImageCapabilities::SharedImageCapabilities() = default;
SharedImageCapabilities::SharedImageCapabilities(
    const SharedImageCapabilities& other) = default;
SharedImageCapabilities::~SharedImageCapabilities() = default;

}  // namespace gpu
