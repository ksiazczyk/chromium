// Copyright 2025 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Client component export macros
// summary: Defines the GPU_COMMAND_BUFFER_CLIENT_EXPORT macro for dllexport, dllimport or default visibility depending on component build settings and platform.
// ---

#ifndef GPU_COMMAND_BUFFER_CLIENT_GPU_COMMAND_BUFFER_CLIENT_EXPORT_H_
#define GPU_COMMAND_BUFFER_CLIENT_GPU_COMMAND_BUFFER_CLIENT_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(GPU_COMMAND_BUFFER_CLIENT_IMPLEMENTATION)
#define GPU_COMMAND_BUFFER_CLIENT_EXPORT __declspec(dllexport)
#else
#define GPU_COMMAND_BUFFER_CLIENT_EXPORT __declspec(dllimport)
#endif  // defined(GPU_IMPLEMENTATION)

#else  // defined(WIN32)
#define GPU_COMMAND_BUFFER_CLIENT_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define GPU_COMMAND_BUFFER_CLIENT_EXPORT
#endif

#endif  // GPU_COMMAND_BUFFER_CLIENT_GPU_COMMAND_BUFFER_CLIENT_EXPORT_H_
