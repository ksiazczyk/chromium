// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: Test event recorder implementation
// summary: Implements an event rewriter that clones and records every event it receives for use in tests.
// relations:
//   - depends_on /ash/accessibility/test_event_recorder.h
// ---

#include "ash/accessibility/test_event_recorder.h"

namespace ash {

TestEventRecorder::TestEventRecorder() = default;
TestEventRecorder::~TestEventRecorder() = default;

ui::EventDispatchDetails TestEventRecorder::RewriteEvent(
    const ui::Event& event,
    const Continuation continuation) {
  events_.push_back(event.Clone());
  return SendEvent(continuation, &event);
}

}  // namespace ash
