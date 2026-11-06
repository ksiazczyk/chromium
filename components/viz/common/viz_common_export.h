// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Viz common export macros
// summary: Defines the VIZ_COMMON_EXPORT macro that controls DLL import and export of viz common symbols on Windows and symbol visibility on other platforms.
// ---

#ifndef COMPONENTS_VIZ_COMMON_VIZ_COMMON_EXPORT_H_
#define COMPONENTS_VIZ_COMMON_VIZ_COMMON_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(VIZ_COMMON_IMPLEMENTATION)
#define VIZ_COMMON_EXPORT __declspec(dllexport)
#else
#define VIZ_COMMON_EXPORT __declspec(dllimport)
#endif  // defined(VIZ_COMMON_IMPLEMENTATION)

#else  // defined(WIN32)
#define VIZ_COMMON_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define VIZ_COMMON_EXPORT
#endif

#endif  // COMPONENTS_VIZ_COMMON_VIZ_COMMON_EXPORT_H_
