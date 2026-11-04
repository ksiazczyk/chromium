// Copyright 2024 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// ---docerion
// type: source
// title: MockActiveSessionAuthViewObserver implementation
// summary: Implements the constructor and destructor of the MockActiveSessionAuthViewObserver test double for the Ash auth views.
// relations:
//   - depends_on /ash/auth/views/test_support/mock_active_session_auth_view_observer.h
// ---

#include "ash/auth/views/test_support/mock_active_session_auth_view_observer.h"

namespace ash {

MockActiveSessionAuthViewObserver::MockActiveSessionAuthViewObserver() =
    default;

MockActiveSessionAuthViewObserver::~MockActiveSessionAuthViewObserver() =
    default;

}  // namespace ash
