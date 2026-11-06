// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GL_EXPORT macro definitions for shared library builds
// summary: Defines the GL_EXPORT macro to handle DLL import and export of the ui/gl library across Windows, POSIX, and non-component builds.
// ---

#ifndef UI_GL_GL_EXPORT_H_
#define UI_GL_GL_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(GL_IMPLEMENTATION)
#define GL_EXPORT __declspec(dllexport)
#else
#define GL_EXPORT __declspec(dllimport)
#endif  // defined(GL_IMPLEMENTATION)

#else  // defined(WIN32)
#define GL_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define GL_EXPORT
#endif

#endif  // UI_GL_GL_EXPORT_H_
