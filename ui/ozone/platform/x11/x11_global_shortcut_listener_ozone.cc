// Copyright 2021 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: X11 global shortcut listener for Ozone
// summary: Implements the Ozone platform global shortcut listener for X11, delegating start, stop, accelerator registration, and key press notifications to the shared X11 listener.
// ---

#include "ui/ozone/platform/x11/x11_global_shortcut_listener_ozone.h"

namespace ui {

X11GlobalShortcutListenerOzone::X11GlobalShortcutListenerOzone(
    PlatformGlobalShortcutListenerDelegate* delegate)
    : PlatformGlobalShortcutListener(delegate) {}

X11GlobalShortcutListenerOzone::~X11GlobalShortcutListenerOzone() {
  if (delegate())
    delegate()->OnPlatformListenerDestroyed();
}

void X11GlobalShortcutListenerOzone::StartListening() {
  XGlobalShortcutListener::StartListening();
}

void X11GlobalShortcutListenerOzone::StopListening() {
  XGlobalShortcutListener::StopListening();
}

bool X11GlobalShortcutListenerOzone::RegisterAccelerator(KeyboardCode key_code,
                                                         bool is_alt_down,
                                                         bool is_ctrl_down,
                                                         bool is_shift_down) {
  return XGlobalShortcutListener::RegisterAccelerator(
      key_code, is_alt_down, is_ctrl_down, is_shift_down);
}

void X11GlobalShortcutListenerOzone::UnregisterAccelerator(
    KeyboardCode key_code,
    bool is_alt_down,
    bool is_ctrl_down,
    bool is_shift_down) {
  return XGlobalShortcutListener::UnregisterAccelerator(
      key_code, is_alt_down, is_ctrl_down, is_shift_down);
}

void X11GlobalShortcutListenerOzone::OnKeyPressed(KeyboardCode key_code,
                                                  bool is_alt_down,
                                                  bool is_ctrl_down,
                                                  bool is_shift_down) {
  if (delegate()) {
    delegate()->OnKeyPressed(key_code, is_alt_down, is_ctrl_down,
                             is_shift_down);
  }
}

}  // namespace ui
