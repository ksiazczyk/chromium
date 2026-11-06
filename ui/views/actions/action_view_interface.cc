// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Action view interface implementation
// summary: Implements the default InvokeActionImpl behavior that invokes the given action item.
// ---

#include "ui/views/actions/action_view_interface.h"

#include "ui/actions/actions.h"

namespace views {

void ActionViewInterface::InvokeActionImpl(actions::ActionItem* action_item) {
  action_item->InvokeAction();
}

}  // namespace views
