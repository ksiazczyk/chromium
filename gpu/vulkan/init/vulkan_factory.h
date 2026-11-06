// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Header declaring CreateVulkanImplementation
// summary: Declares the gpu::CreateVulkanImplementation factory function with default flags for SwiftShader, protected memory, and native forcing, exported from the VULKAN_INIT component.
// ---

#ifndef GPU_VULKAN_INIT_VULKAN_FACTORY_H_
#define GPU_VULKAN_INIT_VULKAN_FACTORY_H_

#include <memory>

#include "base/component_export.h"
#include "gpu/vulkan/vulkan_implementation.h"

namespace gpu {

COMPONENT_EXPORT(VULKAN_INIT)
std::unique_ptr<VulkanImplementation> CreateVulkanImplementation(
    bool use_swiftshader = false,
    bool allow_protected_memory = false,
    bool force_native = false);

}  // namespace gpu

#endif  // GPU_VULKAN_INIT_VULKAN_FACTORY_H_
