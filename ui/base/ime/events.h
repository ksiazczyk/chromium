// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Key event auto-repeat suppression declarations
// summary: Declares exported helpers to get and set whether a key event should be autorepeated or suppressed.
// ---

#ifndef UI_BASE_IME_EVENTS_H_
#define UI_BASE_IME_EVENTS_H_

#include "base/component_export.h"
#include "ui/events/event.h"

namespace ui {

// Gets and sets whether the key event should be autorepeated or not.
COMPONENT_EXPORT(UI_BASE_IME)
bool HasKeyEventSuppressAutoRepeat(const ui::Event::Properties& properties);
COMPONENT_EXPORT(UI_BASE_IME)
void SetKeyEventSuppressAutoRepeat(ui::Event::Properties& properties);

}  // namespace ui

#endif  // UI_BASE_IME_EVENTS_H_
