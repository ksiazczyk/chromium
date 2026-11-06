// Copyright 2019 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Windows accessibility delegate value pattern utility
// summary: Declares a helper that reports whether a Windows platform accessibility node delegate supports the value pattern.
// ---

#ifndef UI_ACCESSIBILITY_PLATFORM_AX_PLATFORM_NODE_DELEGATE_UTILS_WIN_H_
#define UI_ACCESSIBILITY_PLATFORM_AX_PLATFORM_NODE_DELEGATE_UTILS_WIN_H_

#include "base/component_export.h"

namespace ui {

class AXPlatformNodeDelegate;

// Returns true if the value pattern is supported
COMPONENT_EXPORT(AX_PLATFORM)
bool IsValuePatternSupported(AXPlatformNodeDelegate*);

}  // namespace ui

#endif  // UI_ACCESSIBILITY_PLATFORM_AX_PLATFORM_NODE_DELEGATE_UTILS_WIN_H_
