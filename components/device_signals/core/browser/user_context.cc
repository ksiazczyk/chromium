// Copyright 2022 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: User context equality implementation
// summary: Implements the equality operator for UserContext, comparing the user IDs of two contexts.
// ---

#include "components/device_signals/core/browser/user_context.h"

namespace device_signals {

bool operator==(const UserContext& l, const UserContext& r) {
  return l.user_id == r.user_id;
}

}  // namespace device_signals
