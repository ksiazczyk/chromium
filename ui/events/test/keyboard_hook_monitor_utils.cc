// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Keyboard hook monitor test utilities implementation
// summary: Implements functions that simulate keyboard hook registration and unregistration on the Windows KeyboardHookMonitorImpl for tests.
// ---

#include "ui/events/test/keyboard_hook_monitor_utils.h"

#include "ui/events/win/keyboard_hook_monitor_impl.h"

namespace ui {

void SimulateKeyboardHookRegistered() {
  KeyboardHookMonitorImpl::GetInstance()->NotifyHookRegistered();
}

void SimulateKeyboardHookUnregistered() {
  KeyboardHookMonitorImpl::GetInstance()->NotifyHookUnregistered();
}

}  // namespace ui
