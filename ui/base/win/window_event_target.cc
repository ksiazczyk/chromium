// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: WindowEventTarget implementation
// summary: Defines the WindowEventTarget constructor, destructor and the Win32_InputEventTarget property name constant.
// ---

#include "ui/base/win/window_event_target.h"

namespace ui {

const char WindowEventTarget::kWin32InputEventTarget[]
    = "Win32_InputEventTarget";

WindowEventTarget::WindowEventTarget() = default;

WindowEventTarget::~WindowEventTarget() = default;

}  // namespace ui
