// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AcceleratedWidgetMac export macro
// summary: Defines the ACCELERATED_WIDGET_MAC_EXPORT visibility macro used when building the component as a shared library.
// ---

#ifndef UI_ACCELERATED_WIDGET_MAC_ACCELERATED_WIDGET_MAC_EXPORT_H_
#define UI_ACCELERATED_WIDGET_MAC_ACCELERATED_WIDGET_MAC_EXPORT_H_

#if defined(WIN32)
#error Not for use on Windows.
#endif

#if defined(COMPONENT_BUILD)

#define ACCELERATED_WIDGET_MAC_EXPORT __attribute__((visibility("default")))

#else  // defined(COMPONENT_BUILD)
#define ACCELERATED_WIDGET_MAC_EXPORT
#endif

#endif  // UI_ACCELERATED_WIDGET_MAC_ACCELERATED_WIDGET_MAC_EXPORT_H_
