// Copyright 2018 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Null window targeter implementation
// summary: Implements NullWindowTargeter, an event targeter that drops all events by never finding a target for them.
// ---

#include "ui/aura/null_window_targeter.h"

#include "base/notreached.h"

namespace aura {

NullWindowTargeter::NullWindowTargeter() = default;
NullWindowTargeter::~NullWindowTargeter() = default;

ui::EventTarget* NullWindowTargeter::FindTargetForEvent(ui::EventTarget* root,
                                                        ui::Event* event) {
  return nullptr;
}

ui::EventTarget* NullWindowTargeter::FindNextBestTarget(
    ui::EventTarget* previous_target,
    ui::Event* event) {
  NOTREACHED();
}

}  // namespace aura
