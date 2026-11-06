// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: GCM driver export macro header
// summary: Declares the GCM_DRIVER_EXPORT macro that controls DLL import and export of the component on Windows and other platforms.
// ---

#ifndef COMPONENTS_GCM_DRIVER_COMMON_GCM_DRIVER_EXPORT_H_
#define COMPONENTS_GCM_DRIVER_COMMON_GCM_DRIVER_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(GCM_DRIVER_IMPLEMENTATION)
#define GCM_DRIVER_EXPORT __declspec(dllexport)
#else
#define GCM_DRIVER_EXPORT __declspec(dllimport)
#endif  // defined(GCM_DRIVER_IMPLEMENTATION)

#else  // defined(WIN32)
#define GCM_DRIVER_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define GCM_DRIVER_EXPORT
#endif

#endif  // COMPONENTS_GCM_DRIVER_COMMON_GCM_DRIVER_EXPORT_H_
