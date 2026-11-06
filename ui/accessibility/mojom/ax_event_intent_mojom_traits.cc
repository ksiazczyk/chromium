// Copyright 2020 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AXEventIntent Mojo traits implementation
// summary: Implements the Mojo StructTraits Read function that converts serialized EventIntent messages into ui::AXEventIntent objects.
// ---

#include "ui/accessibility/mojom/ax_event_intent_mojom_traits.h"

namespace mojo {

// static
bool StructTraits<ax::mojom::EventIntentDataView, ui::AXEventIntent>::Read(
    ax::mojom::EventIntentDataView data,
    ui::AXEventIntent* out) {
  out->command = data.command();
  out->input_event_type = data.input_event_type();
  out->text_boundary = data.text_boundary();
  out->move_direction = data.move_direction();
  return true;
}

}  // namespace mojo
