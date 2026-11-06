// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WinWindow export macro header
// summary: Defines the WIN_WINDOW_EXPORT macro for exporting or importing symbols when building the win_window component.
// ---

#ifndef UI_PLATFORM_WINDOW_WIN_WIN_WINDOW_EXPORT_H_
#define UI_PLATFORM_WINDOW_WIN_WIN_WINDOW_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(WIN_WINDOW_IMPLEMENTATION)
#define WIN_WINDOW_EXPORT __declspec(dllexport)
#else
#define WIN_WINDOW_EXPORT __declspec(dllimport)
#endif  // defined(WIN_WINDOW_IMPLEMENTATION)

#else  // defined(WIN32)
#define WIN_WINDOW_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define WIN_WINDOW_EXPORT
#endif

#endif  // UI_PLATFORM_WINDOW_WIN_WIN_WINDOW_EXPORT_H_
