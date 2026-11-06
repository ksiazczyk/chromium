// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Vulkan context provider export macros
// summary: Defines the VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT macro controlling symbol visibility and DLL import or export for the Vulkan context provider component.
// ---

#ifndef COMPONENTS_VIZ_COMMON_VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT_H_
#define COMPONENTS_VIZ_COMMON_VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(VIZ_VULKAN_CONTEXT_PROVIDER_IMPLEMENTATION)
#define VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT __declspec(dllexport)
#else
#define VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT __declspec(dllimport)
#endif  // defined(VIZ_VULKAN_CONTEXT_PROVIDER_IMPLEMENTATION)

#else  // defined(WIN32)
#if defined(VIZ_VULKAN_CONTEXT_PROVIDER_IMPLEMENTATION)
#define VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT \
  __attribute__((visibility("default")))
#else
#define VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT
#endif
#endif

#else  // defined(COMPONENT_BUILD)
#define VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT
#endif

#endif  // COMPONENTS_VIZ_COMMON_VIZ_VULKAN_CONTEXT_PROVIDER_EXPORT_H_
