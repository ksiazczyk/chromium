// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Synthetic pen driver implementation
// summary: Implements the synthetic pen pointer driver, which builds pen-type mouse leave events and provides a weak pointer for safe dispatch handling.
// ---

#include "content/common/input/synthetic_pen_driver.h"

#include "third_party/blink/public/common/input/synthetic_web_input_event_builders.h"

namespace content {

SyntheticPenDriver::SyntheticPenDriver() {
  mouse_event_.pointer_type = blink::WebPointerProperties::PointerType::kPen;
}

SyntheticPenDriver::~SyntheticPenDriver() = default;

void SyntheticPenDriver::Leave(int index) {
  DCHECK_EQ(index, 0);
  int modifiers = last_modifiers_;
  if (from_devtools_debugger_)
    modifiers |= blink::WebInputEvent::kFromDebugger;
  mouse_event_ = blink::SyntheticWebMouseEventBuilder::Build(
      blink::WebInputEvent::Type::kMouseLeave,
      mouse_event_.PositionInWidget().x(), mouse_event_.PositionInWidget().y(),
      modifiers, mouse_event_.pointer_type);
}

base::WeakPtr<SyntheticPointerDriver> SyntheticPenDriver::AsWeakPtr() {
  return weak_ptr_factory_.GetWeakPtr();
}

}  // namespace content
