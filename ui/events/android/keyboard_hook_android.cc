// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Android keyboard hook stub
// summary: Android implementation of the KeyboardHook factory methods that returns null hooks for modifier and media key interception.
// ---

#include "ui/events/keyboard_hook.h"

#include <memory>
#include <optional>

#include "base/functional/callback.h"
#include "ui/events/keycodes/dom/dom_code.h"
#include "ui/gfx/native_ui_types.h"

namespace ui {

// static
std::unique_ptr<KeyboardHook> KeyboardHook::CreateModifierKeyboardHook(
    std::optional<base::flat_set<DomCode>> dom_codes,
    gfx::AcceleratedWidget accelerated_widget,
    KeyboardHook::KeyEventCallback callback) {
  return nullptr;
}

// static
std::unique_ptr<KeyboardHook> KeyboardHook::CreateMediaKeyboardHook(
    KeyboardHook::KeyEventCallback callback) {
  return nullptr;
}

}  // namespace ui
