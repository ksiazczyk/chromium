// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: test
// title: TestEvent clone implementation
// summary: Implements TestEvent::Clone, returning a copy of the test event instance.
// ---

#include "ui/events/test/test_event.h"

namespace ui::test {

std::unique_ptr<Event> TestEvent::Clone() const {
  return std::make_unique<TestEvent>(*this);
}

}  // namespace ui::test
