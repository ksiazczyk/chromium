// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VIZ_CLIENT_EXPORT symbol visibility macro header
// summary: Defines the VIZ_CLIENT_EXPORT macro that controls dllexport, dllimport, or default visibility of viz client symbols in component builds.
// ---

#ifndef COMPONENTS_VIZ_CLIENT_VIZ_CLIENT_EXPORT_H_
#define COMPONENTS_VIZ_CLIENT_VIZ_CLIENT_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(VIZ_CLIENT_IMPLEMENTATION)
#define VIZ_CLIENT_EXPORT __declspec(dllexport)
#else
#define VIZ_CLIENT_EXPORT __declspec(dllimport)
#endif  // defined(VIZ_CLIENT_IMPLEMENTATION)

#else  // defined(WIN32)
#define VIZ_CLIENT_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define VIZ_CLIENT_EXPORT
#endif

#endif  // COMPONENTS_VIZ_CLIENT_VIZ_CLIENT_EXPORT_H_
