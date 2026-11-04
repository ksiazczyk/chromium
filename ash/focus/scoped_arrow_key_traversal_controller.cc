// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: Scoped arrow key traversal controller implementation
// summary: Implements scoped enabler and disabler classes that toggle a global arrow key traversal flag via base::AutoReset.
// relations:
//   - depends_on /ash/focus/scoped_arrow_key_traversal_controller.h
//   - depends_on /base/check.h
// ---

#include "ash/focus/scoped_arrow_key_traversal_controller.h"

#include "base/check.h"

namespace ash {

namespace {
bool arrow_key_traversal_enabled = false;
}  // namespace

template <>
ScopedArrowKeyTraversalController<true>::ScopedArrowKeyTraversalController()
    : auto_reset_(&arrow_key_traversal_enabled, true) {}

template <>
ScopedArrowKeyTraversalController<true>::~ScopedArrowKeyTraversalController() {
  CHECK(arrow_key_traversal_enabled);
}

template <>
ScopedArrowKeyTraversalController<false>::ScopedArrowKeyTraversalController()
    : auto_reset_(&arrow_key_traversal_enabled, false) {}

template <>
ScopedArrowKeyTraversalController<false>::~ScopedArrowKeyTraversalController() {
  CHECK(!arrow_key_traversal_enabled);
}

bool IsArrowKeyTraversalEnabled() {
  return arrow_key_traversal_enabled;
}

}  // namespace ash
