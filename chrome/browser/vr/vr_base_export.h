// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VR base export macro
// summary: Defines the VR_BASE_EXPORT macro controlling symbol export for component builds of the VR base code.
// ---

#ifndef CHROME_BROWSER_VR_VR_BASE_EXPORT_H_
#define CHROME_BROWSER_VR_VR_BASE_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(VR_BASE_IMPLEMENTATION)
#define VR_BASE_EXPORT __declspec(dllexport)
#else
#define VR_BASE_EXPORT __declspec(dllimport)
#endif  // defined(VR_BASE_IMPLEMENTATION)

#else  // defined(WIN32)
#define VR_BASE_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define VR_BASE_EXPORT
#endif

#endif  // CHROME_BROWSER_VR_VR_BASE_EXPORT_H_
