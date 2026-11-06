// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: NullEventTargeter implementation
// summary: Implements an event targeter that finds no targets for events, effectively blocking event dispatch from a root.
// ---

#include "ui/events/null_event_targeter.h"

#include "base/notreached.h"

namespace ui {

NullEventTargeter::NullEventTargeter() {
}

NullEventTargeter::~NullEventTargeter() {
}

EventTarget* NullEventTargeter::FindTargetForEvent(EventTarget* root,
                                                   Event* event) {
  return nullptr;
}

EventTarget* NullEventTargeter::FindNextBestTarget(EventTarget* previous_target,
                                                   Event* event) {
  NOTREACHED();
}

}  // namespace ui
