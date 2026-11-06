// Copyright 2017 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: AXActionHandler implementation
// summary: Implements AXActionHandler, which automatically registers a valid AXTreeID with the AXActionHandlerRegistry when constructed.
// ---

#include "ui/accessibility/ax_action_handler.h"

#include "ui/accessibility/ax_action_handler_registry.h"

namespace ui {

AXActionHandler::AXActionHandler()
    : AXActionHandlerBase(
          AXActionHandlerRegistry::GetInstance()->GetOrCreateAXTreeID(this)) {}

}  // namespace ui
