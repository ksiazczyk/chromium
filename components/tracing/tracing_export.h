// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Tracing export macro header
// summary: Declares the TRACING_EXPORT macro that controls symbol export and import for the tracing component on Windows and component builds.
// ---

#ifndef COMPONENTS_TRACING_TRACING_EXPORT_H_
#define COMPONENTS_TRACING_TRACING_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(TRACING_IMPLEMENTATION)
#define TRACING_EXPORT __declspec(dllexport)
#else
#define TRACING_EXPORT __declspec(dllimport)
#endif  // defined(TRACING_IMPLEMENTATION)

#else  // defined(WIN32)
#define TRACING_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define TRACING_EXPORT
#endif

#endif  // COMPONENTS_TRACING_TRACING_EXPORT_H_
