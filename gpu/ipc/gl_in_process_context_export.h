// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GL in-process context export macros
// summary: Defines the GL_IN_PROCESS_CONTEXT_EXPORT macro controlling symbol visibility for component builds on Windows and other platforms.
// ---

#ifndef GPU_IPC_GL_IN_PROCESS_CONTEXT_EXPORT_H_
#define GPU_IPC_GL_IN_PROCESS_CONTEXT_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(GL_IN_PROCESS_CONTEXT_IMPLEMENTATION)
#define GL_IN_PROCESS_CONTEXT_EXPORT __declspec(dllexport)
#else
#define GL_IN_PROCESS_CONTEXT_EXPORT __declspec(dllimport)
#endif  // defined(GL_IN_PROCESS_CONTEXT_IMPLEMENTATION)

#else  // defined(WIN32)
#define GL_IN_PROCESS_CONTEXT_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define GL_IN_PROCESS_CONTEXT_EXPORT
#endif

#endif  // GPU_IPC_GL_IN_PROCESS_CONTEXT_EXPORT_H_
