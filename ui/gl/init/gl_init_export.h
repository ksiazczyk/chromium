// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GL_INIT_EXPORT macro for component builds
// summary: Defines the GL_INIT_EXPORT macro that controls symbol import and export for the ui/gl/init component build.
// ---

#ifndef UI_GL_INIT_GL_INIT_EXPORT_H_
#define UI_GL_INIT_GL_INIT_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(GL_INIT_IMPLEMENTATION)
#define GL_INIT_EXPORT __declspec(dllexport)
#else
#define GL_INIT_EXPORT __declspec(dllimport)
#endif  // defined(GL_INIT_IMPLEMENTATION)

#else  // defined(WIN32)
#define GL_INIT_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define GL_INIT_EXPORT
#endif

#endif  // UI_GL_INIT_GL_INIT_EXPORT_H_
