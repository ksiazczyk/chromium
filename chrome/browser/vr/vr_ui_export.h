// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: VR UI export macro header
// summary: Defines the VR_UI_EXPORT macro controlling symbol visibility for the Chrome VR UI in component builds.
// ---

#ifndef CHROME_BROWSER_VR_VR_UI_EXPORT_H_
#define CHROME_BROWSER_VR_VR_UI_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(VR_UI_IMPLEMENTATION)
#define VR_UI_EXPORT __declspec(dllexport)
#else
#define VR_UI_EXPORT __declspec(dllimport)
#endif  // defined(VR_UI_IMPLEMENTATION)

#else  // defined(WIN32)
#define VR_UI_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define VR_UI_EXPORT
#endif

#endif  // CHROME_BROWSER_VR_VR_UI_EXPORT_H_
