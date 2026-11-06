// Copyright 2016 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Keycodes X export macro header
// summary: Defines the KEYCODES_X_EXPORT macro controlling symbol visibility for the X keycodes component.
// ---

#ifndef UI_EVENTS_KEYCODES_KEYCODES_X_EXPORT_H_
#define UI_EVENTS_KEYCODES_KEYCODES_X_EXPORT_H_

#if defined(COMPONENT_BUILD)
#if defined(WIN32)

#if defined(KEYCODES_X_IMPLEMENTATION)
#define KEYCODES_X_EXPORT __declspec(dllexport)
#else
#define KEYCODES_X_EXPORT __declspec(dllimport)
#endif  // defined(KEYCODES_X_IMPLEMENTATION)

#else  // defined(WIN32)
#define KEYCODES_X_EXPORT __attribute__((visibility("default")))
#endif

#else  // defined(COMPONENT_BUILD)
#define KEYCODES_X_EXPORT
#endif

#endif  // UI_EVENTS_KEYCODES_KEYCODES_X_EXPORT_H_
